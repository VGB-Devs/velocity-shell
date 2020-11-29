#include "../../../include/shell/commands/echo/Echo.hpp"
#include <iostream>
Echo::Echo() : Command("echo", "echo something", "echo <args>") {

};
std::string Echo::run(const std::vector<std::string>& cmdArgs) { 
    if(cmdArgs.size() == 1) { 
        return "\n";
    }

    std::string msg = "";

    for(int i = 1; i < cmdArgs.size(); i++) {
        msg += cmdArgs[i] + " ";
    }

    return msg + "\n";
};
