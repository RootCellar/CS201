#include "userInput.hpp"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void getUserStrings(std::vector<std::string> & words) {
    std::string in;
    while(true) {
	cout << "Enter a word to put in the vector (\"end\" to stop) >";
	cin >> in;
	cout << endl;

	if(in == "end") return;
	else words.push_back(in);
    }
}
