#include <iostream>
#include "file_utils.h"
using namespace std;

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

    int n=3;
    int k=0;
    
    while(n>0)
    {
        k++;
        n--;
    }
    cout << n << k << endl;

    return 2; // dev1

}person3 change 
