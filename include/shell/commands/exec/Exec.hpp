#include "../Command.hpp"
#include <iostream>
class Exec : public Command {
    public:
        Exec();
        std::string run(std::vector<std::string> args);
};
