#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

#include "colours.hpp"
#include "handler.hpp"

void clear() {
	std::cout << std::string(100, '\n');
	std::cout << "\033[2J";
}

int main() {
	clear();
	while(true) {
		std::string input_raw = "";
		std::vector<std::string> args;
		std::string output = cyan() + "root " + boldRed() + "→" + reset() + " ";
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
