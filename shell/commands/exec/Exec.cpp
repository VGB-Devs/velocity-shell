#include "../../../include/shell/commands/exec/Exec.hpp"
#include <iostream>

Exec::Exec(std::string name, std::initializer_list<std::string> args, std::initializer_list<std::string> aliases, std::string description, std::string usage) 
    : Command(name, args, aliases, description, usage) {
    std::cout << "in constructor of Exec command" << std::endl;        
}
