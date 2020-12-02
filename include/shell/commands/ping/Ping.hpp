#include "../Command.hpp"

class Ping : public Command {
    public:
        Ping();
        std::string run(const std::vector<std::string>& args);
};