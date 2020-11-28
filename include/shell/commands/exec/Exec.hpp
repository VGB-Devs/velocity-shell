#include "../Command.hpp"

class Exec : public Command {
    public:
        Exec(std::string, std::initializer_list<std::string>, std::initializer_list<std::string>, std::string, std::string);
};
