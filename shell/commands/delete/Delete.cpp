#include "../../../include/shell/commands/delete/Delete.hpp"
Delete::Delete() : Command("delete", "delete a file", "delete <filename>") {};

std::string Delete::run(const std::vector<std::string>& args) {
    if(remove(args[1].c_str()) != 0) {
        return "error deleting file";
    } else {
        return "";
    }
}