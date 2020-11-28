#include "../include/shell/Shell.hpp"
#include "../include/shell/commands/Command.hpp"
#include <map>

#include "../include/shell/commands/echo/Echo.hpp"
#include "../include/shell/commands/exec/Exec.hpp"
Shell::Shell() {
    this->commands().insert(std::pair<std::string, Command*>("echo", new Echo()));
    this->commands().insert(std::pair<std::string, Command*>("exec", new Exec()));
};
int Shell::run(std::string commandName, std::vector<std::string> commandArgs) {
    Command* cmd = this->commands().at(commandName);
    cmd->run(commandArgs);
    return 0;
}
