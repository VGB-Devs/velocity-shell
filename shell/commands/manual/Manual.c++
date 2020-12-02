#include "../../../include/shell/commands/manual/Manual.hpp"
#include "../../../include/shell/Shell.hpp"

#include <iostream>
#include <vector>

Manual::Manual(Shell* sh) : Command("man", "Grabs the manual for x command!", "man <command_name>") {
    this->shell = sh;
};

std::string Manual::run(const std::vector<std::string>& args) {
    if (args[1] == "") {
        std::vector<std::string> commands {};
        for (int i = 0; i < this->shell->commands().size(); i++) {
            std::cout << this->shell->commands().at(i).name() << std::endl;
        }
    }

    std::string helpMsg = "Manual entry for " + args[1] + "...\n";
    if(this->shell->commands().find(args[1]) != this->shell->commands().end()) {
        std::string name = this->shell->commands().at(args[1])->name();
        std::string description = this->shell->commands().at(args[1])->description();
        std::string usage = this->shell->commands().at(args[1])->usage();
        helpMsg += "Name: " + name + "\nDescription: " + description + "\nUsage: " + usage + "\n";
        return  helpMsg;
    } else { 
        helpMsg += "No manual entry found for " + args[1] + "!\n";
        return helpMsg;
    }
}