#include "../../../include/shell/commands/clear/Clear.hpp"

Clear::Clear() : Command("clear", "clear the terminal screen", "clear") {

};

std::string Clear::run(const std::vector<std::string>& args) {
    return "\033[H\033[2J";
}