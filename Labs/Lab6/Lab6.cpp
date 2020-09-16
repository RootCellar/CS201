/*
 * Darian Marvel
 * 9/15/2020
 * Lab6.cpp
 * Completing lab 6 for CS201
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

void printString(string s);

int main()
{
    //Try some strings automatically
    cout << "Trying some strings automatically first..." << endl;
    printString("Hello!");
    printString("About");
    printString("Hello, World!");
    printString("C++");
    printString("Python");
    printString("Encapsulation");
    printString("Semicolon");
    printString("Hypothesis");

    //Allow the user to try some strings of their own
    string input;
    while(true) {
	cout << "Enter a string, to receive the string back and it's length: ";
	cin >> input;
	cout << endl;

	printString(input);
    }
}

void printString(string s) {
    cout << "String: \"" << s << "\"" << endl;
    cout << "Length: " << s.size() << endl;
}
