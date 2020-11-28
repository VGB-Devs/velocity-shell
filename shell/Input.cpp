#include "../include/shell/Input.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
template <class Container>
void splitToArgs(const std::string& str, Container& cont)
{
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
};
std::vector<std::string> ShellInput::get() {
    std::string tmp;
    std::vector<std::string> tmpvec;
    getline(std::cin, tmp);
    splitToArgs(tmp, tmpvec);
    return tmpvec; 
}