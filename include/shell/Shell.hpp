#include "commands/Command.hpp"
class Shell {
    public:
        Shell();
    private:
        std::vector<Command*> shellCommands;
};
