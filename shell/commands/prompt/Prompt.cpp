#include "../../../include/shell/commands/prompt/Prompt.hpp"
Prompt::Prompt(Shell* sh) : Command("prompt", "change your shell prompt", "prompt <prompt>") {
    this->shell = sh;
};

std::string Prompt::run(const std::vector<std::string>& args) {
    this->shell->prefix()="";
    for(int i = 1; i < args.size(); i++) {
        this->shell->prefix()+=args[i] + " ";
    }
    return "\n";
}