#include "../../include/shell/commands/Command.hpp"
Command::Command(std::string name, std::initializer_list<std::string> args, std::initializer_list<std::string> aliases, std::string description, std::string usage)
    : commandName{name}, commandDescription{description},  commandUsage{usage} {
    this->commandAliases.insert(this->commandAliases.end(), aliases.begin(), aliases.end());
    this->commandArgs.insert(this->commandArgs.end(), args.begin(), args.end());
}
