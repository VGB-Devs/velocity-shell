#include "../Command.hpp"
#include <iostream>
class Exec : public Command {
    public:
        Exec();
        int run(std::vector<std::string> args);
};
