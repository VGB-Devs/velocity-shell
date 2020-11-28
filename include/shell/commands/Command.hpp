#pragma once
#include <string>
#include <vector>
#include <initializer_list>
class Command {
    public:
        Command(std::string, std::initializer_list<std::string>, std::initializer_list<std::string>, std::string, std::string);
        ~Command() {};
        std::string name() { return this->commandName; }
        std::string description() { return this->commandDescription; }
        std::string usage() { return this->commandDescription; }
        auto args() { return this->commandDescription; }
        auto aliases() { return this->commandAliases; }

    private:
        std::string commandName;
        std::string commandDescription;
        std::string commandUsage;
        std::vector<std::string> commandAliases {};
        std::vector<std::string> commandArgs {};
};
