#include <iostream>
#include "../../include/util/colors/Colors.hpp"
using namespace std;

string red() { return "\033[0;31m"; }
string boldRed() { return "\033[1;31m"; }
string green() { return "\033[0;32m"; }
string boldGreen() { return "\033[1;32m"; }
string yellow() { return "\033[0;33m"; }
string boldYellow() { return "\033[1;33m"; }
string blue() { return "\033[0;34m"; }
string boldBlue() { return "\033[1;34m"; }
string magenta() { return "\033[0;35m"; }
string boldMagenta() { return "\033[1;35m"; }
string cyan() { return "\033[0;36m"; }
string boldCyan() { return "\033[1;36m"; }

// RESET
string reset() { return "\033[0m"; }
