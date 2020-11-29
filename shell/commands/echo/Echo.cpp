#include "../../../include/shell/commands/echo/Echo.hpp"
#include "../../../include/util/colors/Colors.hpp"
#include "../../../include/util/prefix/Prefix.hpp"
#include "../../../include/util/output/Output.hpp"

#include <iostream>
Echo::Echo() : Command("echo", "echo something", "echo <args>") {

};
int Echo::run(std::vector<std::string> cmdArgs) { 
    if(cmdArgs.size() == 1) { 
        std::cout << error("please provide input!") << std::endl;
        return 0;
    }

    std::string msg = "";

    for(int i = 1; i < cmdArgs.size(); i++) {
        msg += cmdArgs[i] + " ";
    }

    std::cout << success("echo", msg) << std::endl;
    return 0;
};
