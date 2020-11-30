#include "../Command.hpp"
#include "../../Shell.hpp"
#include <iostream>
#include <vector>
class Prompt : public Command {
    public:
        Prompt(Shell*);
        std::string run(const std::vector<std::string>& args);
        Shell* shell;
};