#include <iostream>
#include <vector>
#include "include/util/colors/Colors.hpp"
#include "include/util/handler/Handler.hpp"
int main() {
    system("clear");
	while(true) {
		std::vector<std::string> args;
		std::string input_raw = "", output = cyan() + "root " + boldRed() + "→" + reset() + " ";
		std::cout << output;
		std::getline (std::cin, input_raw);
		input_raw += " ";
		std::string temp = "";
		for (int i = 0; i < input_raw.size(); i++) {
			char tempc = input_raw[i];
			if (tempc == *" ") {
				args.push_back(temp);
				temp = "";
			}  else {
				temp += input_raw[i];
			}
		}
		inputA(args);
	}
}

// →
