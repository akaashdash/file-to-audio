#ifndef DECODE_HPP
#define DECODE_HPP

#include <vector>
#include <string>

std::vector<bool> decodeSegment(const std::vector<float>& segment);
std::vector<uint8_t> decodeData(const std::vector<float>& data);
void decode(const std::string& inFile, const std::string& outFile);

#endif