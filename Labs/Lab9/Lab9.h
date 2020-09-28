#ifndef LAB9_H
#define LAB9_H

#include <string>

using std::string;

int modifyString(string & string, int n) {
    string += std::to_string(n%10);
    return string.size();
}

#endif
