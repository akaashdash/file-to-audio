#ifndef CONFIG_HPP
#define CONFIG_HPP

// Constants
/// Standard audio sample rate in Hz
const int SAMPLE_RATE = 44100;

/// Nyquist frequency in Hz (highest frequency that can be encoded)
const int MAX_FREQ = SAMPLE_RATE / 2;

/// Frequency step between encoding bands in Hz
const int FREQ_STEP = 100;

/// Duration of each encoded segment in seconds
const double SEGMENT_DURATION = 0.1;

// Derived constants
/// Maximum number of frequency bands
const int MAX_BANDS = MAX_FREQ / FREQ_STEP;

/// Number of usable frequency bands (excluding 0 Hz band)
const int USABLE_BANDS = MAX_BANDS - 1;

/// Number of bytes that can be encoded in each segment
const int SEGMENT_BYTES = ((USABLE_BANDS - 1) / 8);

/// Number of bits that can be encoded in each segment
const int SEGMENT_BITS = SEGMENT_BYTES * 8;

/// Special flag frequency to indicate single byte segments
const int FLAG_BAND = (USABLE_BANDS + 1) * FREQ_STEP;

/// Amplitude for each frequency component
const double AMPLITUDE = 1.0 / (MAX_BANDS + 1);

#endif