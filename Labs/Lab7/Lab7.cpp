/*
 * Darian Marvel
 * 9/15/2020
 * Lab7.cpp
 * Completing lab 7 for CS201
 */

// Not quite starting yet - 9/15/2020
// Now we're good to go - 9/20/2020

#include "intio.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int in;
	for (int i = 0; i < 3; i++) {
		cout << "Enter an integer: ";
		in = getInt();
		cout << endl;
		putInt(in, 10);
		cout << endl;

   }
}
