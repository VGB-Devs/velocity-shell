#include "../Command.hpp"

class Exit : public Command {
    public:
        Exit();
        std::string run(const std::vector<std::string>& args);
};