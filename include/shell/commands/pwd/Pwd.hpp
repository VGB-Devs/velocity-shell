#include <iostream>
#include "../Command.hpp"
class Pwd : public Command {
    public:
        Pwd();
        std::string run(std::vector<std::string> args);
};