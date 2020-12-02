#include "../../../include/shell/commands/ping/Ping.hpp"
#include <iostream>
#include <vector>
#include <fstream>
Ping::Ping() : Command("ping", "ping a website", "ping <ip/url>") {};

std::string Ping::run(const std::vector<std::string>& args) {
    // TODO: CODE
    return "pinging " + args[1] + "... (lol sike i need to learn sockets/networking in c++)\n";
}