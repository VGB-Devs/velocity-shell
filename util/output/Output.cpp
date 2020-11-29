#include <iostream>

#include "../../include/util/colors/Colors.hpp"
#include "../../include/util/prefix/Prefix.hpp"

std::string success(std::string type, std::string message) {
    std::string output = green() + prefix() + " " + type + reset() + " " + message;
    return output;
}

std::string error(std::string message) {
    std::string output = red() + prefix() + " Error " + boldRed() + message;
    return output;
}

std::string warning(std::string type, std::string message) {
    std::string output = yellow() + prefix() + " " + type + boldYellow() + " " + message;
    return output;
}