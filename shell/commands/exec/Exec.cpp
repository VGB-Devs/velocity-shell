#include "../../../include/shell/commands/exec/Exec.hpp"
#include <iostream>
#include "../../../include/util/colors/Colors.hpp"
#include "../../../include/util/prefix/Prefix.hpp"

Exec::Exec() : Command("exec", "execute something", "exec <args>") {

};
int Exec::run(std::vector<std::string> cmdArgs) { 
    std::cout << boldGreen() + prefix() + " output " + reset() << "gotta implement this too" << std::endl;
    return 0;
};
