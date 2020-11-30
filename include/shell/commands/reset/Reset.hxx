#include "../Command.hpp"

class Reset : public Command {
    public:
        Reset();
        std::string run(const std::vector<std::string>& args);
};