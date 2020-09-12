/*
 * Darian Marvel
 * 9/11/2020
 * HW1.CPP
 * Doing HW1 for CS201
 */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

	cout << "Hello there!" << endl;

	bool going = true;
	int size = 0;

	while (going) {

		cout << "Enter a number, representing the size of the diamond (0 to quit): ";
		cout << endl;
		cin >> size;

		if (size < 0) {
			cout << "That is not a valid number. Please try again." << endl;
			continue;
		}

		if (size == 0) {
			cout << "Alright. Bye!" << endl;
			break;
		}

	}

}