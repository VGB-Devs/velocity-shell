#include "commands/Command.hpp"
#include "Input.hpp"
#include <map>
#pragma once
class Shell {
    public:
        Shell();
        int run(const std::string& commandName, const std::vector<std::string>& commandArgs);
        ShellInput input;
        std::map<std::string, Command*>& commands() { return this->shellCommands; }
    private:
        std::map<std::string, Command*> shellCommands;

};
