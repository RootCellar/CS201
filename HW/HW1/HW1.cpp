/*
 * Darian Marvel
 * 9/11/2020
 * HW1.CPP
 * Doing HW1 for CS201
 */

//Includes
#include <iostream>

//Using statements for ease of use
using std::cout;
using std::endl;
using std::cin;

//main function
int main() {

	cout << "Hello there!" << endl;

	//setup
	bool going = true;
	int size = 0;

	while (going) {

		//don't immediately put endl, we want input to be on the same line
		cout << "Enter a number, representing the size of the diamond (0 to quit): ";
		cin >> size;

		//now place newline before continuing
		cout << endl;

		//Make sure they type a valid number
		if (size < 0) {
			cout << "That is not a valid number. Please try again." << endl;
			continue;
		}

		//Allow the user to quit
		if (size == 0) {
			cout << "Alright. Bye!" << endl;
			break;
		}

		cout << endl << endl;

		//start at 1, size (characters) goes up 2 each time size times
		int maxWidth = 1 + 2 * (size - 1);

		//Print the top half of the diamond
		for (int i = 1; i <= size; i++) {
			int numChars = (2 * i) - 1;
			int empty = maxWidth - numChars;
			int spacesPerSide = empty / 2;

			//print spaces, print characters, print spaces
			for (int k = 0; k < spacesPerSide; k++) cout << " ";
			for (int k = 0; k < numChars; k++) cout << "*";
			for (int k = 0; k < spacesPerSide; k++) cout << " ";

			cout << endl;
		}

	}

	return 0;

}