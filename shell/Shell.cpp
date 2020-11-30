#include <map>
#include "../include/shell/Shell.hpp"

#include "../include/shell/commands/Command.hpp"
#include "../include/util/output/Output.hpp"

#include "../include/shell/commands/echo/Echo.hpp"
#include "../include/shell/commands/exec/Exec.hpp"
#include "../include/shell/commands/pwd/Pwd.hpp"
#include "../include/shell/commands/clear/Clear.hpp"
#include "../include/shell/commands/read/Read.hpp"
#include "../include/shell/commands/write/Write.hpp"
#include "../include/shell/commands/file/File.hpp"
#include "../include/shell/commands/delete/Delete.hpp"

Shell::Shell() {
    this->commands().insert(std::pair<std::string, Command*>("echo", new Echo()));
    this->commands().insert(std::pair<std::string, Command*>("exec", new Exec()));
    this->commands().insert(std::pair<std::string, Command*>("pwd", new Pwd()));
    this->commands().insert(std::pair<std::string, Command*>("clear", new Clear()));
    this->commands().insert(std::pair<std::string, Command*>("read", new Read()));
    this->commands().insert(std::pair<std::string, Command*>("write", new Write()));
    this->commands().insert(std::pair<std::string, Command*>("file", new File()));
    this->commands().insert(std::pair<std::string, Command*>("delete", new Delete()));
};
int Shell::run(const std::string& commandName, const std::vector<std::string>& commandArgs) {
    Command* cmd = this->commands().at(commandName);
    std::string output = cmd->run(commandArgs);
    std::cout << output::success(output);
    return 0;
}
