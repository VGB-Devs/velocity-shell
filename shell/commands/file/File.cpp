#include "../../../include/shell/commands/file/File.hpp"
#include <iostream>
#include <vector>
#include <fstream>
File::File() : Command("file", "create a new file", "file <filename>") {};

std::string File::run(const std::vector<std::string>& args) {
    std::ofstream file;
    file.open(args[1]);
    file << "";
    file.close();
    return "\n";
}