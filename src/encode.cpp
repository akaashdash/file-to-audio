#include "encode.hpp"
#include "config.hpp"

#include "AudioFile.h"

#include <cmath>
#include <algorithm>
#include <iostream>

std::vector<float> encodeSegment(const std::vector<uint8_t>& bytes) {
    // Convert segment bytes to bits
    std::vector<bool> bits;
    for (uint8_t byte : bytes) {
        for (int i = 7; i >= 0; --i) {
            bits.push_back((byte >> i) & 1);
        }
    }

    int numSamples = static_cast<int>(SAMPLE_RATE * SEGMENT_DURATION);
    std::vector<float> signal(numSamples, 0.0f);

    // Encode bits
    for (size_t i = 0; i < bits.size(); ++i) {
        if (bits[i]) {
            float freq = static_cast<float>((1 + i) * FREQ_STEP);
            for (int t = 0; t < numSamples; ++t) {
                signal[t] += static_cast<float>(AMPLITUDE * std::sin(2 * M_PI * freq * t / SAMPLE_RATE));
            }
        }
    }

    // Add flag for single byte segments
    if (bits.size() == 8) {
        for (int t = 0; t < numSamples; ++t) {
            signal[t] += static_cast<float>(AMPLITUDE * std::sin(2 * M_PI * FLAG_BAND * t / SAMPLE_RATE));
        }
    }

    return signal;
}

std::vector<float> encodeData(const std::vector<uint8_t>& data) {
    std::vector<float> audio;
    for (size_t i = 0; i < data.size(); i += SEGMENT_BYTES) {
        std::vector<uint8_t> segment(data.begin() + i, data.begin() + std::min(i + SEGMENT_BYTES, data.size()));
        // Handle the last segment differently if it does not fill the entire segment
        if (segment.size() < SEGMENT_BYTES) {
            // Encode bytes individually with an indicator flag to avoid padding zeros at the end
            for (size_t j = 0; j < segment.size(); ++j)  {
                std::vector<uint8_t> byte{segment[j]};
                std::vector<float> byteSignal = encodeSegment(byte);
                audio.insert(audio.end(), byteSignal.begin(), byteSignal.end());
            }
        } else {
            // Encode segment normally
            std::vector<float> segmentSignal = encodeSegment(segment);
            audio.insert(audio.end(), segmentSignal.begin(), segmentSignal.end());
        }
    }
    return audio;
}

void encode(const std::string& inFile, const std::string& outFile) {
    // Read input file
    std::ifstream input(inFile, std::ios::binary);
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    input.close();

    // Encode data
    std::vector<float> audio = encodeData(data);

    // Save as WAV file
    AudioFile<float> audioFile;
    audioFile.setNumChannels(1);
    audioFile.setSampleRate(SAMPLE_RATE);
    std::vector<std::vector<float>> buffer(1, audio);
    audioFile.setAudioBuffer(buffer);
    audioFile.save(outFile);
}