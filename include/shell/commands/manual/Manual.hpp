#include "../Command.hpp"

class Manual : public Command {
    public:
        Manual();
        std::string run(const std::vector<std::string>& args);
};