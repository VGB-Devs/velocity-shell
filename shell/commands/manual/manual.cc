#include "../../../include/shell/commands/manual/Manual.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>

Reset::Reset() : Command("reset", "Completely resets the terminal.", "reset") {};

std::string Reset::run(const std::vector<std::string>& args) {
    return "uwu...\n";
}