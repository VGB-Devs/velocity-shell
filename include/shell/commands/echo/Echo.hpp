#include <iostream>
#include "../Command.hpp"

class Echo : public Command {
    public:
        Echo();
        std::string run(const std::vector<std::string>& args);
};
