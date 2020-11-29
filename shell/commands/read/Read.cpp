#include "../../../include/shell/commands/read/Read.hpp"
#include <vector>
#include <fstream>
Read::Read() : Command("read", "read the contents of a file", "read <filename>") {};

std::string Read::run(const std::vector<std::string>& args) {
    std::string output, tmp;
    std::ifstream file(args[1]);
    if(file.is_open()) {
        while(getline(file, output)) {
            tmp+= "\n" + output;
        }   
    }
    return tmp + "\n";
}