/*
 * Darian Marvel
 * 9/29/2020
 * Lab10.cpp
 * Completing Lab 10 for CS201
*/

#include <iostream>
#include "Lab10.h"

using std::cout;
using std::endl;

int main() {
    for(int i = 1; i < 41; i++) {
	if(isDiv3(i)) cout << i << endl;
    }
}
