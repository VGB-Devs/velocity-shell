#include "../../../include/shell/commands/reset/Reset.hxx"
#include <iostream>
#include <vector>
#include <fstream>

#include <unistd.h>
#include <sys/wait.h>

Reset::Reset() : Command("write", "write text to a file", "write <file> <content>") {};

std::string Reset::run(const std::vector<std::string>& args) {
    execlp("./vsh", nullptr);
}