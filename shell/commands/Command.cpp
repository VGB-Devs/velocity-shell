#include "../../include/shell/commands/Command.hpp"
Command::Command(std::string name, std::string desc, std::string usage) : commandName(name), commandDescription(desc), commandUsage(usage) {
    //this->commandAliases.insert(this->commandAliases.end(), aliases.begin(), aliases.end());
    //this->commandArgs.insert(this->commandArgs.end(), args.begin(), args.end());
}
 