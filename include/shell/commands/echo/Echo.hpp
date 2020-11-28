#include "../Command.hpp"
#include <vector>
#include <iostream>
class Echo : public Command {
    public:
        Echo();
        int run(std::vector<std::string> args);
};
