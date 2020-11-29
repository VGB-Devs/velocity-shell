#include <iostream>
#include "../Command.hpp"

class Exec : public Command {
    public:
        Exec();
        std::string run(const std::vector<std::string>& args);
};
