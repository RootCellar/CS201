/*
 * Darian Marvel
 * 9/11/2020
 * grid.cpp
 * Working with a grid for CS 201 HW 1
 */

#define SIZE 8

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	while (true) {

		//setup vars
		bool valid = false;
		int inputX = 0;
		int inputY = 0;

		//First collect row

		while (!valid) {
			cout << "Enter a positive integer, from 0 to " << SIZE-1 << ": ";
			cin >> inputX;
			if (inputX > -1 && inputX < 8) valid = true;
			else {
				cout << "Not valid." << endl;
			}
		}

		//Collect column

		while (!valid) {
			cout << "Enter a positive integer, from 0 to " << SIZE-1 << ": ";
			cin >> inputY;
			if (inputY > -1 && inputY < 8) valid = true;
			else {
				cout << "Not valid." << endl;
			}
		}

		//nested loop to print grid
		for (int i = 0; i < SIZE; i++) {
			for (int k = 0; k < SIZE; k++) {

				if (k == inputX && i == inputY) {
					cout << " X";
				}
				else cout << " .";

			}
			cout << endl;
		}

		//Allow the user to quit if they so choose
		cout << endl;
		cout << "Would you like to continue? >0 to continue, otherwise exit: ";
		cin >> inputX;

		if (inputX < 1) return 0;

	}
}