#include "../Command.hpp"
#include "../../Shell.hpp"


class Usage : public Command {
    public:
        Usage(Shell* shell);
        std::string run(const std::vector<std::string>& args);

    private:
        Shell* shell;
};