#include "encode.hpp"
#include "decode.hpp"

#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <encode|decode> <input_file> <output_file>" << std::endl;
        return 1;
    }

    std::string operation = argv[1];
    std::string inputFile = argv[2];
    std::string outputFile = argv[3];

    try {
        if (operation == "encode") {
            encode(inputFile, outputFile);
            std::cout << "File '" << inputFile << "' has been encoded to '" << outputFile << "'" << std::endl;
        } else if (operation == "decode") {
            decode(inputFile, outputFile);
            std::cout << "File '" << inputFile << "' has been decoded to '" << outputFile << "'" << std::endl;
        } else {
            std::cerr << "Usage: " << argv[0] << " <encode|decode> <input_file> <output_file>" << std::endl;
            return 1;
        }
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}