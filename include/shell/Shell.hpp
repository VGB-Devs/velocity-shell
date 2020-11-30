#include "commands/Command.hpp"
#include "Input.hpp"
#include "../util/colors/Colors.hpp"
#include "../util/string/String.hxx"
#include <map>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#pragma once

class Shell {
    public:
        Shell();
        std::string &prefix();
        int run(const std::string& commandName, const std::vector<std::string>& commandArgs);
        ShellInput input;
        std::map<std::string, Command*>& commands() { return this->shellCommands; }
    private:
        std::map<std::string, Command*> shellCommands;
        std::string shellPrefix;
        std::string cwd;
        std::string home;
};
