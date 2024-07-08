#ifndef ENCODE_HPP
#define ENCODE_HPP

#include <vector>
#include <string>

/**
 * Encodes a segment of bytes into an audio sample.
 * 
 * @param bytes Vector of bytes to encode.
 * @return Vector of float audio samples representing the encoded segment.
 */
std::vector<float> encodeSegment(const std::vector<uint8_t>& bytes);

/**
 * Encodes an entire data set into audio samples.
 * 
 * @param data Vector of bytes to encode.
 * @return Vector of float audio samples representing the encoded data.
 */
std::vector<float> encodeData(const std::vector<uint8_t>& data);

/**
 * Encodes an input file into a WAV audio file.
 * 
 * @param inFile Path to the input file to be encoded.
 * @param outFile Path where the encoded WAV file will be saved.
 */
void encode(const std::string& inFile, const std::string& outFile);

#endif