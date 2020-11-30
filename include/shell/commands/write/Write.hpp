#include "../Command.hpp"

class Write : public Command {
    public:
        Write();
        std::string run(const std::vector<std::string>& args);
};