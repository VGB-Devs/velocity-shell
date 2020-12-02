#include "../../../include/shell/commands/write/Write.hpp"
#include <iostream>
#include <vector>
#include <fstream>
Write::Write() : Command("write", "write text to a file", "write <file> <content>") {};

std::string Write::run(const std::vector<std::string>& args) {
    std::ofstream file;
    file.open(args[1]);
    std::string toWrite = "";
    for (int i = 2; i < args.size(); i++) {
        toWrite += args[i] + " ";
    }
    file << toWrite;
    file.close();
    return "\n";
}