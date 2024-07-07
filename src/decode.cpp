#include "decode.hpp"
#include "config.hpp"

#include "AudioFile.h"
#include "kiss_fft.h"

#include <cmath>
#include <algorithm>
#include <iostream>

std::vector<bool> decodeSegment(const std::vector<float>& segment) {
    int numSamples = static_cast<int>(SAMPLE_RATE * SEGMENT_DURATION);
    std::vector<bool> bits;

    // Prepare FFT
    kiss_fft_cfg cfg = kiss_fft_alloc(numSamples, 0, nullptr, nullptr);
    std::vector<kiss_fft_cpx> in(numSamples), out(numSamples);

    // Prepare input for FFT
    for (int i = 0; i < numSamples; ++i) {
        in[i].r = segment[i];
        in[i].i = 0;
    }

    // Perform FFT
    kiss_fft(cfg, in.data(), out.data());

    // Analyze FFT results
    float maxMagnitude = 0;
    for (int i = 0; i < numSamples / 2; ++i) {
        float magnitude = std::sqrt(out[i].r * out[i].r + out[i].i * out[i].i);
        maxMagnitude = std::max(maxMagnitude, magnitude);
    }

    // Check for flag (single byte segment)
    int flagIdx = static_cast<int>(FLAG_BAND * numSamples / SAMPLE_RATE);
    bool flag = std::sqrt(out[flagIdx].r * out[flagIdx].r + out[flagIdx].i * out[flagIdx].i) > 0.1f * maxMagnitude;

    // Decode bits
    int numBits = flag ? 8 : SEGMENT_BITS;
    for (int j = 0; j < numBits; ++j) {
        int freq = (1 + j) * FREQ_STEP;
        int idx = static_cast<int>(freq * numSamples / SAMPLE_RATE);
        float magnitude = std::sqrt(out[idx].r * out[idx].r + out[idx].i * out[idx].i);
        bits.push_back(magnitude > 0.1f * maxMagnitude);
    }

    kiss_fft_free(cfg);
    return bits;
}

std::vector<uint8_t> decodeData(const std::vector<float>& data) {
    std::vector<uint8_t> decodedData;
    int segmentSamples = static_cast<int>(SAMPLE_RATE * SEGMENT_DURATION);

    for (size_t i = 0; i < data.size(); i += segmentSamples) {
        std::vector<float> segment(data.begin() + i, data.begin() + std::min(i + segmentSamples, data.size()));
        auto bits = decodeSegment(segment);

        for (size_t j = 0; j < bits.size(); j += 8) {
            if (j + 8 <= bits.size()) {
                uint8_t byte = 0;
                for (int k = 0; k < 8; ++k) {
                    byte |= (bits[j+k] << (7-k));
                }
                decodedData.push_back(byte);
            }
        }
    }

    return decodedData;
}

void decode(const std::string& inFile, const std::string& outFile) {
    // Load WAV file
    AudioFile<float> audioFile;
    audioFile.load(inFile);

    // Decode data
    const auto& samples = audioFile.samples[0];
    std::vector<uint8_t> decodedData = decodeData(samples);

    // Write output file
    std::ofstream output(outFile, std::ios::binary);
    output.write(reinterpret_cast<const char*>(decodedData.data()), decodedData.size());
    output.close();
}