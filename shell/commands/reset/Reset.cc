#include "../../../include/shell/commands/reset/Reset.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>

Reset::Reset() : Command("reset", "Completely resets the terminal.", "reset") {};

std::string Reset::run(const std::vector<std::string>& args) {
    execlp("./vsh", nullptr);
    return "Resetting...\n";
}