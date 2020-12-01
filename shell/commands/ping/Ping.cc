#include "../../../include/shell/commands/ping/Ping.hxx"
#include <iostream>
#include <vector>
#include <fstream>
Ping::Ping() : Command("write", "write text to a file", "write <file> <content>") {};

std::string Ping::run(const std::vector<std::string>& args) {
    // TODO: CODE
    return "pinging " + args[1] + "... (lol sike i need to learn sockets/networking in c++)";
}