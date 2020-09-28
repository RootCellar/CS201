/*
 * Darian Marvel
 * 9/20/2020
 * Lab9.cpp
 * Completing lab 9 for CS201
 */


#include "Lab9.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s;

    s = "Hello";
    cout << "length: " << modifyString(s,0) << endl;
    cout << "string: " << s << endl;
    
    cout << "length: " << modifyString(s, 15) << endl;
    cout << "string: " << s << endl;

    cout << "length: " << modifyString(s, 28) << endl;
    cout << "string: " << s << endl;
}
