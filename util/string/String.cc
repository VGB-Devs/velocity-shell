#include <iostream>

std::string eraseSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos)
    {
        mainStr.erase(mainStr.begin(), mainStr.end()-mainStr.length()+toErase.length());
        std::string output = "~" + mainStr;
        return output;
    } else {
        return mainStr;
    }

}