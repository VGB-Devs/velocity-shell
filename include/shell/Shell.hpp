#include "commands/Command.hpp"
#include "Input.hpp"
#include <map>
#pragma once
class Shell {
    public:
        Shell();
        int run(std::string commandName, std::vector<std::string> commandArgs);
        ShellInput input;
        std::map<std::string, Command*>& commands() { return this->shellCommands; }
    private:
        std::map<std::string, Command*> shellCommands;

};
