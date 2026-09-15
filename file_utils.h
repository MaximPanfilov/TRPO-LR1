#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <string>

void writeFile(const std::string& filename, const std::string& text);
std::string readFile(const std::string& filename);

#endif