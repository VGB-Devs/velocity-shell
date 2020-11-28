#include "../../../include/shell/commands/echo/Echo.hpp"
#include "../../../include/util/colors/Colors.hpp"
#include "../../../include/util/prefix/Prefix.hpp"
#include <iostream>
Echo::Echo() : Command("echo", "echo something", "echo <args>") {

};
int Echo::run(std::vector<std::string> cmdArgs) { 
    if(cmdArgs.size() == 1) { 
        std::cout << std::endl;
        return 0;
    }
    std::cout << boldGreen() + prefix() + " " + reset();
    for(int i = 1; i < cmdArgs.size(); i++) {
        std::cout << cmdArgs.at(i) << " ";
    }
    std::cout << std::endl;
    return 0;
};
