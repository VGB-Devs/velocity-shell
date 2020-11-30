#include "../../../include/shell/commands/exit/Exit.hpp"

Exit::Exit() : Command("exit", "exit the shell", "exit") {};

std::string Exit::run(const std::vector<std::string>& args) {
    exit(0);
    return "\0";
}