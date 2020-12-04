#include <iostream>
#include <vector>
#include "include/shell/Shell.hpp"
#include "include/util/output/Output.hpp"
#include "include/shell/Raw.h"
int main(int argc, char** argv) {
    Shell vsh;
	std::cout << "\033[H\033[2J";
	while(true) {
		disableCntrlC(argc, argv); // Disables contrl + c signal request. IMPLEMENT A CNTRL D BLOCKER
		std::cout << vsh.prefix();
		std::vector<std::string> args = vsh.input.get();
		if(args.empty()){
        } else if(vsh.commands().find(args[0]) != vsh.commands().end()) {
			vsh.run(args[0], args);
		} else {
			std::cout << output::error("\"" + args[0] + "\" is not a valid command!") << std::endl;
		}
	}
}
