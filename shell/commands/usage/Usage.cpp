#include "../../../include/shell/commands/usage/Usage.hpp"
#include "../../../include/shell/Shell.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
Usage::Usage(Shell* sh) : Command("usage", "show the usage for a command", "usage <command_name>") {
    this->shell = sh;
};

std::string Usage::run(const std::vector<std::string>& args) {
    if(args[1].empty()) {
        auto it = this->shell->commands().begin();
        while(it != this->shell->commands().end()) {
            std::cout << it->second->usage() << " :: " << it->second->description() << std::endl;
            it++;
        }
        return "";
    } else {
        std::ifstream usage("shell/commands/" + args[1] + "/usage");
        std::string line;
        if(usage.is_open()) {
            while(getline(usage, line)) {
                std::cout << line << std::endl;
            }
            usage.close();
            return "";
        } else {
            return "no usage written for " + args[1] + "\n";
        }
    }
}