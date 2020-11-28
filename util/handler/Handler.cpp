#include <iostream>
#include <vector>

#include "../../include/util/colors/Colors.hpp"
#include "../../include/util/prefix/Prefix.hpp"
void inputA(std::vector<std::string> user_args) {
    std::string output = "";
    if (user_args[0] == "info") {
        output = boldGreen() + prefix() + " " + reset() + "Velocity shell, written in pure C++! Created by Vex & bloatoo.\n";
        std::cout << output;
    } else if (user_args[0] == "quit") {
        output = boldGreen() + prefix() + " " + reset() + " Shutting the shell down...\n";
        std::cout << output;
        exit(0);
    } else if (user_args[0] == "exec") {
    } else {
        output = red() + "→ Error " + reset() + "'" + user_args[0] + "' is not a valid command!\n";
        std::cout << output;
    }
}
