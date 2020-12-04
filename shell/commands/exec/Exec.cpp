#include "../../../include/shell/commands/exec/Exec.hpp"
#include <iostream>
#include "../../../include/util/colors/Colors.hpp"
#include "../../../include/util/prefix/Prefix.hpp"
#include <unistd.h>
#include <sys/wait.h>
Exec::Exec() : Command("exec", "execute something", "exec <args>") {

};
std::string Exec::run(const std::vector<std::string>& args) { 
    pid_t pid = -1; 
    std::string cArgs = "";
    for (int i = 2; i < args.size(); i++) {
        cArgs += args[i] + " ";
    }
    pid = fork(); 
    if(pid < 0) 
    {
        std::cerr << "Fork failed"; 
        exit(1); 
    } 
    else if(pid == 0) 
    {
        execlp(args[1].c_str(), cArgs.c_str(), nullptr);
    }
    else 
    {
        wait(NULL); 
    } 
    return "\n";
};