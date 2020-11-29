#include <vector>
#include <iostream>
#pragma once
class Command {
    public:
        Command(std::string name, std::string desc, std::string usage);
        ~Command() {};
        std::string& name() { return this->commandName; }
        std::string& description() { return this->commandDescription; }
        std::string& usage() { return this->commandDescription; }
        auto& args() { return this->commandArgs; }
        auto& aliases() { return this->commandAliases; }
        virtual std::string run(std::vector<std::string> commandArgs) = 0;

    private:
        std::string commandName;
        std::string commandDescription;
        std::string commandUsage;
        std::vector<std::string> commandAliases {};
        std::vector<std::string> commandArgs {};
};
