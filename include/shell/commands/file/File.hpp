#include "../Command.hpp"

class File : public Command {
    public:
        File();
        std::string run(const std::vector<std::string>& args);
};