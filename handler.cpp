#include <iostream>
#include <vector>
#include "colours.hpp"

void inputA(std::vector<std::string> user_args) {

    if (user_args[0] == "info") {
        std::string output = boldGreen() + "→ " + reset() + "Velocity shell, written in pure C++! Created by Vex & bloatoo.\n";
        std::cout << output;
    } else {
        std::string output = red() + "→ Error " + reset() + "'" + user_args[0] + "' is not a valid command!\n";
        std::cout << output;
    }
}