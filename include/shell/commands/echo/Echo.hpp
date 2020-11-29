#include "../Command.hpp"
#include <vector>
#include <iostream>
class Echo : public Command {
    public:
        Echo();
        std::string run(std::vector<std::string> args);
};
