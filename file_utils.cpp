#include "file_utils.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
int files = 0;

void writeFile(const std::string& filename, const std::string& text) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Failed to open file\n";
        return;
    }
    file << text;
    file.close();
    files++;
    std::cout << "Written successfully\n";
    std::cout << "Thanks for using our software!\n";
    cout << "You've opened " << files << " files already! Great job!" << endl;
}

std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return "Failed to open file";
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    files++;
    std::cout << "Thanks for using our software!\n";
    cout << "You've opened " << files << " files already! Great job!" << endl;
    return buffer.str();
}person2 change 
