#include <iostream>

#include "../../include/util/colors/Colors.hpp"
#include "../../include/util/prefix/Prefix.hpp"
namespace output {
    std::string success(const std::string& message) {
        std::string output = green() + prefix() + reset() + " " + message;
        return output;
    }

    std::string error(const std::string& message) {
        std::string output = red() + prefix() + " Error " + boldRed() + message + reset();
        return output;
    }

    std::string warning(const std::string& message) {
        std::string output = boldYellow() + " " + message;
        return output;
    }
}