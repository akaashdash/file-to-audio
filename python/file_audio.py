import wave
import numpy as np
import os
import argparse

# Constants
SAMPLE_RATE = 44100  # Hz, standard audio sample rate
MAX_FREQ = SAMPLE_RATE // 2  # Hz, Nyquist frequency
FREQ_STEP = 1000  # Hz, frequency step between encoding bands
SEGMENT_DURATION = 0.1  # seconds, duration of each encoded segment

# Derived constants
MAX_BANDS = MAX_FREQ // FREQ_STEP
USABLE_BANDS = MAX_BANDS - 1  # Exclude 0 Hz band
SEGMENT_BYTES = ((USABLE_BANDS - 1) // 8)  # Remove top band for flag
SEGMENT_BITS = SEGMENT_BYTES * 8 # Number of bits per segment
FLAG_BAND = (USABLE_BANDS + 1) * FREQ_STEP  # Special flag frequency
AMPLITUDE = 1 / (MAX_BANDS + 1)  # Amplitude for each frequency component

def encode_segment(bytes):
    """
    Encode a segment of bytes into an audio signal.

    Args:
        bytes (bytes): The bytes to encode.

    Returns:
        numpy.ndarray: The encoded audio signal.
    """
    bits = [int(b) for byte in bytes for b in f"{byte:08b}"]
    t = np.linspace(0, SEGMENT_DURATION, int(SAMPLE_RATE * SEGMENT_DURATION), False)
    signal = np.zeros_like(t)

    # Encode each bit as a frequency
    for i, bit in enumerate(bits):
        if bit:
            freq = (1 + i) * FREQ_STEP
            signal += AMPLITUDE * np.sin(2 * np.pi * freq * t)

    # Add flag for single byte segments
    if len(bits) == 8:
        signal += AMPLITUDE * np.sin(2 * np.pi * FLAG_BAND * t)

    return signal

def encode_data(data):
    """
    Encode entire data into an audio signal.

    Args:
        data (bytes): The data to encode.

    Returns:
        numpy.ndarray: The encoded audio signal.
    """
    signals = []
    for i in range(0, len(data), SEGMENT_BYTES):
        segment = data[i:i+SEGMENT_BYTES]
        if len(segment) < SEGMENT_BYTES:
            # Handle last segment byte by byte, avoid padding to fill length
            for j in range(len(segment)):
                signals.append(encode_segment(segment[j:j+1]))
        else:
            signals.append(encode_segment(segment))
    
    audio = np.concatenate(signals)
    return (audio * 32767).astype(np.int16)  # Scale to 16 bit audio

def encode(in_file, out_file):
    """
    Encode a file into a WAV audio file.

    Args:
        in_file (str): Path to the input file.
        out_file (str): Path to the output WAV file.
    """
    with open(in_file, 'rb') as f:
        data = f.read()
    
    audio = encode_data(data)
    with wave.open(out_file, 'w') as wf:
        wf.setnchannels(1)  # Mono audio
        wf.setsampwidth(2)  # 16 bit audio
        wf.setframerate(SAMPLE_RATE)
        wf.writeframes(audio.tobytes())

def decode_segment(segment):
    """
    Decode a segment of audio signal back into bits.

    Args:
        segment (numpy.ndarray): The audio segment to decode.

    Returns:
        list: The decoded bits.
    """
    fft = np.fft.rfft(segment)
    freqs = np.fft.rfftfreq(len(segment), 1/SAMPLE_RATE)
    magnitude = np.abs(fft)

    # Check for single byte flag
    flag_idx = np.argmin(np.abs(freqs - FLAG_BAND))
    flag = magnitude[flag_idx] > 0.1 * np.max(magnitude)

    bits = []
    for j in range(8 if flag else SEGMENT_BITS):
        freq = (1 + j) * FREQ_STEP
        idx = np.argmin(np.abs(freqs - freq))
        bits.append(1 if magnitude[idx] > 0.1 * np.max(magnitude) else 0)

    return bits

def decode_data(data):
    """
    Decode entire audio data back into bytes.

    Args:
        data (numpy.ndarray): The audio data to decode.

    Returns:
        bytes: The decoded data.
    """
    segment_samples = int(SAMPLE_RATE * SEGMENT_DURATION)
    decoded_data = bytearray()

    for i in range(0, len(data), segment_samples):
        segment = data[i:i+segment_samples]
        if len(segment) < segment_samples:
            break

        bits = decode_segment(segment)

        for j in range(0, len(bits), 8):
            if j + 8 <= len(bits):
                byte = int(''.join(map(str, bits[j:j+8])), 2)
                decoded_data.append(byte)

    return bytes(decoded_data)

def decode(in_file, out_file):
    """
    Decode a WAV audio file back into the original file.

    Args:
        in_file (str): Path to the input WAV file.
        out_file (str): Path to the output file.
    """
    with wave.open(in_file, 'r') as wf:
        frames = wf.readframes(wf.getnframes())
        audio = np.frombuffer(frames, dtype=np.int16).astype(float) / 32767.0

    data = decode_data(audio)
    with open(out_file, 'wb') as f:
        f.write(data)

def main():
    parser = argparse.ArgumentParser(description="Encode files into WAV or decode WAV files.")
    parser.add_argument("operation", choices=["encode", "decode"], help="Operation to perform")
    parser.add_argument("input", help="Input file path")
    parser.add_argument("output", help="Output file path")
    
    args = parser.parse_args()

    if not os.path.exists(args.input):
        print(f"Error: File '{args.input}' not found.")
        return

    if args.operation == "encode":
        encode(args.input, args.output)
        print(f"File '{args.input}' has been encoded to '{args.output}'")
        print(f"Encoded file size: {os.path.getsize(args.output)} bytes")
    else:  # decode
        decode(args.input, args.output)
        print(f"File '{args.input}' has been decoded to '{args.output}'")
        print(f"Decoded file size: {os.path.getsize(args.output)} bytes")

if __name__ == "__main__":
    main()