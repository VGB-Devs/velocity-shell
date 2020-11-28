#include <iostream>
#include <vector>

#include "colours.hpp"
#include "utils.hpp"

void inputA(std::vector<std::string> user_args) {
    std::string output = "";
    std::vector<std::string> &args {user_args};
    if (user_args[0] == "info") {
        output = boldGreen() + prefix() + " " + reset() + "Velocity shell, written in pure C++! Created by Vex & bloatoo.\n";
        std::cout << output;
    } else if (args[0] == "quit") {
        output = boldGreen() + prefix() + " " + reset() + " Shutting the shell down...\n";
        std::cout << output;
        exit(0);
    } else {
        output = red() + "→ Error " + reset() + "'" + user_args[0] + "' is not a valid command!\n";
        std::cout << output;
    }
}