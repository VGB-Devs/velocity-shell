#include "../Command.hpp"
#include "../../Shell.hpp"


class Manual : public Command {
    public:
        Manual(Shell* shell);
        std::string run(const std::vector<std::string>& args);

    private:
        Shell* shell;
};