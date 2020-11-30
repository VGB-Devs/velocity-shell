#include "../Command.hpp"

class Delete : public Command {
    public:
        Delete();
        std::string run(const std::vector<std::string>& args);
};