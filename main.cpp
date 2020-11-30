#include <iostream>
#include <vector>
#include "include/util/colors/Colors.hpp"
#include "include/shell/Shell.hpp"
#include "include/util/output/Output.hpp"
#include <fstream>
int main() {
    Shell vsh;
	/*
	std::string prompt;
  	std::ifstream file ("prompt");
  	if (file.is_open()) getline(file, prompt);
	if(prompt == "") prompt = cyan() + "root " + boldRed() + "→" + reset() + "  ";
	*/
	system("clear");
	while(true) {
		std::cout << vsh.prefix();
		std::vector<std::string> args = vsh.input.get();
		if(args.empty()){
        } else if(vsh.commands().find(args[0]) != vsh.commands().end()) {
			vsh.run(args[0], args);
		} else {
			std::cout << output::error("\"" + args[0] + "\" is not a valid command!") << std::endl;
		}
	}
	// file.close();
}
