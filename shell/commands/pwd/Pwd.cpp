#include "../../../include/shell/commands/pwd/Pwd.hpp"
#include <limits.h>
#include <unistd.h>
Pwd::Pwd() : Command("pwd", "print the working directory", "pwd") {

}
std::string Pwd::run(std::vector<std::string> args) {
    char buffer[PATH_MAX];
    getcwd(buffer, sizeof(buffer));
    return buffer;
}