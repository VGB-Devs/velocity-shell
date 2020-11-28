#include <iostream>
#include <vector>
#include "include/util/colors/Colors.hpp"
#include "include/shell/Shell.hpp"
int main() {
    Shell vsh;
	system("clear");
	while(true) {
		std::cout << cyan() + "root " + boldRed() + "→" + reset() + "  ";
		std::vector<std::string> args = vsh.input.get();
		if(args.empty()) {
        } else if(args[0] == "echo") {
			vsh.run("echo", args);
		} else if(args[0] == "exec") {
			vsh.run("exec", args);
        } else if(args[0] == "clear") {
            system("clear");
		} else if(args[0] == "exit") {
			exit(0);
        } else  {
			std::cout << red() + "→ Error " + reset() + "'" + args[0] + "' is not a valid command.\n";
		}
	}
}

// →
