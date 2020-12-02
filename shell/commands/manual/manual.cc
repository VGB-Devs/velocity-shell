#include "../../../include/shell/commands/manual/Manual.hpp"
#include "../../../include/shell/Shell.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>

Manual::Manual(Shell* sh) : Command("man", "Completely resets the terminal.", "reset") {
    this->shell = sh;
};

std::string Manual::run(const std::vector<std::string>& args) {
    return  this->shell->commands().find(args[1]).usage() + "\n";
}