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
        } else if(args[0] == "echo") {
			vsh.run("echo", args);
		} else if(args[0] == "exec") {
			vsh.run("exec", args);
        } else if(args[0] == "clear") {
            //system("clear");
			std::cout << warning("testing", "yeah ok no one cares it works? maybe.") << std::endl;
		} else if(args[0] == "exit") {
			exit(0);
        } else  {
			std::string err = "'" + args[0] + "' is not valid command!";
			std::cout << error(err) << std::endl;
			//std::cout << red() + "→ error " + reset() + "'" + args[0] + "' is not a valid command.\n";
		}
	}
}

// →
