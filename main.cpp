#include <iostream>
#include <vector>
#include "include/util/colors/Colors.hpp"
#include "include/shell/Shell.hpp"
#include "include/util/output/Output.hpp"

int main() {
    Shell vsh;
	system("clear");
	while(true) {
		std::cout << cyan() + "root " + boldRed() + "→" + reset() + "  ";
		std::vector<std::string> args = vsh.input.get();
        if(args.empty()) {
        } else if(vsh.commands().find(args[0]) != vsh.commands().end()) {
			vsh.run(args[0], args);
		} else {
			std::cout << error("'" + args[0] + "' is not valid command!") << std::endl;
		}
	}
}
