#ifndef CONFIG_HPP
#define CONFIG_HPP

// Constants
const int SAMPLE_RATE = 44100; // Hz, standard audio sample rate
const int MAX_FREQ = SAMPLE_RATE / 2; // Hz, Nyquist frequency
const int FREQ_STEP = 100; // Hz, frequency step between encoding bands
const double SEGMENT_DURATION = 0.1; // seconds, duration of each encoded segment

// Derived constants
const int MAX_BANDS = MAX_FREQ / FREQ_STEP;
const int USABLE_BANDS = MAX_BANDS - 1; // Exclude 0 Hz band
const int SEGMENT_BYTES = ((USABLE_BANDS - 1) / 8); // Remove top band for flag
const int SEGMENT_BITS = SEGMENT_BYTES * 8; // Number of bits per segment
const int FLAG_BAND = (USABLE_BANDS + 1) * FREQ_STEP; // Special flag frequency
const double AMPLITUDE = 1.0 / (MAX_BANDS + 1); // Amplitude for each frequency component

#endif