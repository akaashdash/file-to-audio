#include "catch.hpp"

#include "encode.hpp"
#include "decode.hpp"

#include <fstream>
#include <vector>
#include <algorithm>

// Helper function to read file contents
std::vector<uint8_t> readFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
}

TEST_CASE("Test Even Length Text File", "[text]") {
    const std::string inputFile = "even.txt";
    const std::string encodedFile = "even_encoded.wav";
    const std::string decodedFile = "even_decoded.txt";

    // Read original file
    std::vector<uint8_t> originalData = readFile(inputFile);

    // Encode
    encode(inputFile, encodedFile);

    // Decode
    decode(encodedFile, decodedFile);

    // Read decoded file
    std::vector<uint8_t> decodedData = readFile(decodedFile);

    // Compare original and decoded data
    REQUIRE(originalData == decodedData);

    // Check file sizes
    REQUIRE(originalData.size() == decodedData.size());
}

TEST_CASE("Test Odd Length Text File", "[text]") {
    const std::string inputFile = "odd.txt";
    const std::string encodedFile = "odd_encoded.wav";
    const std::string decodedFile = "odd_decoded.txt";

    // Read original file
    std::vector<uint8_t> originalData = readFile(inputFile);

    // Encode
    encode(inputFile, encodedFile);

    // Decode
    decode(encodedFile, decodedFile);

    // Read decoded file
    std::vector<uint8_t> decodedData = readFile(decodedFile);

    // Compare original and decoded data
    REQUIRE(originalData == decodedData);

    // Check file sizes
    REQUIRE(originalData.size() == decodedData.size());
}

TEST_CASE("Test Small Image File", "[image]") {
    const std::string inputFile = "small_image.png";
    const std::string encodedFile = "image_encoded.wav";
    const std::string decodedFile = "image_decoded.png";

    // Read original file
    std::vector<uint8_t> originalData = readFile(inputFile);

    // Encode
    encode(inputFile, encodedFile);

    // Decode
    decode(encodedFile, decodedFile);

    // Read decoded file
    std::vector<uint8_t> decodedData = readFile(decodedFile);

    // Compare original and decoded data
    REQUIRE(originalData == decodedData);

    // Check file sizes
    REQUIRE(originalData.size() == decodedData.size());

    // Additional checks for PNG format
    REQUIRE(originalData.size() >= 8);  // PNG files are at least 8 bytes
    REQUIRE(decodedData.size() >= 8);
    
    // Check PNG signature for corruption
    std::vector<uint8_t> pngSignature = {137, 80, 78, 71, 13, 10, 26, 10};
    REQUIRE(std::equal(pngSignature.begin(), pngSignature.end(), originalData.begin()));
    REQUIRE(std::equal(pngSignature.begin(), pngSignature.end(), decodedData.begin()));
}