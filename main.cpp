#include <iostream>
#include "file_utils.h"

int main() {
    int choice;
    std::cout << "1. Write to file\n2. Read file\nChoice: ";
    std::cin >> choice;
    std::cin.ignore();

    std::string filename;
    std::cout << "Filename: ";
    std::getline(std::cin, filename);

    if (choice == 1) {
        std::string text;
        std::cout << "Text: ";
        std::getline(std::cin, text);
        writeFile(filename, text);
    } else if (choice == 2) {
        std::string content = readFile(filename);
        std::cout << "Content:\n" << content << std::endl;
    } else {
        std::cout << "Invalid choice\n";
    }

    return 0;
}