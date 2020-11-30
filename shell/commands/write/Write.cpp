#include "../../../include/shell/commands/write/Write.hpp"
#include <iostream>
#include <vector>
#include <fstream>
Write::Write() : Command("write", "write text to a file", "write <file> <content>") {};

std::string Write::run(const std::vector<std::string>& args) {
    std::ofstream file;
    file.open(args[1]);
    file << args[2];
    file.close();
    return "\n";
}