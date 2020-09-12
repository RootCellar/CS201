/*
 * Darian Marvel
 * 9/11/2020
 * mileskm.cpp
 * Converting miles to kilometers for CS 201 HW 1
 */

//Place conversion factor here
#define MITOKM 1.609

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	double numMiles = 0;

	while (true) {

		cout << "Enter a positive number to convert to miles, 0 to quit: ";
		cin >> numMiles;
		cout << endl;

		if (numMiles == 0) {
			cout << "Ok. Bye!" << endl;
			break;
		}

		if (numMiles < 0) {
			cout << "Please enter a valid number." << endl;
			continue;
		}

		double km = numMiles * MITOKM;

		cout << numMiles << " miles to kilometers is: " << km << endl;
	}

	return 0;
}