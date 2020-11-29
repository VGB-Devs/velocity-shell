#include "../Command.hpp"

class Read : public Command {
    public:
        Read();
        std::string run(const std::vector<std::string>& args);
};