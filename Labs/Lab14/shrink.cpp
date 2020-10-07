/*
 * Darian Marvel
 * 10/6/2020
 * shrink.cpp
 * Printing a string as it shrinks
*/

#include "shrink.h"

void printShrink(string s) {
    for(int i = s.size(); i > 0; i--) {
	cout << s.substr(0, i) << endl;
    }
    cout << endl;
}
