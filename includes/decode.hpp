#ifndef DECODE_HPP
#define DECODE_HPP

#include <vector>
#include <string>

/**
 * Decodes an audio sample into segment bits.
 * 
 * @param segment Vector of float audio samples to decode.
 * @return Vector of bools representing the decoded bits.
 */
std::vector<bool> decodeSegment(const std::vector<float>& segment);

/**
 * Decodes an entire set of audio samples into bytes.
 * 
 * @param data Vector of float audio samples to decode.
 * @return Vector of bytes representing the decoded data.
 */
std::vector<uint8_t> decodeData(const std::vector<float>& data);

/**
 * Decodes a WAV audio file into the original file format.
 * 
 * @param inFile Path to the input WAV file to be decoded.
 * @param outFile Path where the decoded file will be saved.
 */
void decode(const std::string& inFile, const std::string& outFile);

#endif