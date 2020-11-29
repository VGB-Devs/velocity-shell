#include <iostream>
#include "../Command.hpp"

class Clear : public Command {
    public:
        Clear();
        std::string run(const std::vector<std::string>& args);
};