#include "../../../include/shell/commands/exec/Exec.hpp"
#include <iostream>
#include "../../../include/util/colors/Colors.hpp"
#include "../../../include/util/prefix/Prefix.hpp"

Exec::Exec() : Command("exec", "execute something", "exec <args>") {

};
std::string Exec::run(std::vector<std::string> cmdArgs) { 
    return "gotta implement this too";
};
