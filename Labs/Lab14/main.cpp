/*
 * Darian Marvel
 * 10/6/2020
 * main.cpp
 * Printing out some strings in a shrinking fashion
*/

#include "shrink.h"

int main() {
    string in;

    cout << "Enter a string to print in a shrinking fashion: ";
    cin >> in;
    cout << endl;

    printShrink(in);
}
