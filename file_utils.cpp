#include "file_utils.h"
#include <fstream>
#include <sstream>
#include <iostream>

void writeFile(const std::string& filename, const std::string& text) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Failed to open file\n";
        return;
    }
    file << text;
    file.close();
    std::cout << "Written successfully\n";
}

std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return "Failed to open file";
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}