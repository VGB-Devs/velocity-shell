#include <map>
#include "../include/shell/Shell.hpp"

#include "../include/shell/commands/Command.hpp"
#include "../include/shell/commands/echo/Echo.hpp"
#include "../include/shell/commands/exec/Exec.hpp"
#include "../include/shell/commands/pwd/Pwd.hpp"
#include "../include/util/output/Output.hpp"
Shell::Shell() {
    this->commands().insert(std::pair<std::string, Command*>("echo", new Echo()));
    this->commands().insert(std::pair<std::string, Command*>("exec", new Exec()));
    this->commands().insert(std::pair<std::string, Command*>("pwd", new Pwd()));
};
int Shell::run(std::string commandName, std::vector<std::string> commandArgs) {
    Command* cmd = this->commands().at(commandName);
    std::string output = cmd->run(commandArgs);
    std::cout << success(output) << std::endl;
    return 0;
}
