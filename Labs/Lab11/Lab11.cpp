/*
 * Darian Marvel
 * 10/1/2020
 * Lab11.cpp
 * Doing Lab 11 for CS201
 * Finding only lowercase letters
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string getLower(string input);

int main() {
    string in;

    while(true) {
	cout << "Enter a string: ";
	cin >> in;
	cout << endl;
	cout << "Only taking lowercase letters..." << endl;
	cout << getLower(in) << endl;
    }
}

string getLower(string input) {
    string out = "";
    for(int i=0; i<input.size(); i++) {
	if(input[i] > 'a' && input[i] < 'z') {
	    out += input[i];
	}
    }
    return out;
}
