#include "../../include/shell/commands/Command.hpp"
Command::Command(const std::string& name, const std::string& desc, const std::string& usage) : commandName(name), commandDescription(desc), commandUsage(usage) {
    //this->commandAliases.insert(this->commandAliases.end(), aliases.begin(), aliases.end());
    //this->commandArgs.insert(this->commandArgs.end(), args.begin(), args.end());
}
 