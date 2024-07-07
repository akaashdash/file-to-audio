#ifndef ENCODE_HPP
#define ENCODE_HPP

#include <vector>
#include <string>

std::vector<float> encodeSegment(const std::vector<uint8_t>& bytes);
std::vector<float> encodeData(const std::vector<uint8_t>& data);
void encode(const std::string& inFile, const std::string& outFile);

#endif