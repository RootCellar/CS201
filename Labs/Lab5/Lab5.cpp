/*
 * Darian Marvel
 * 9/15/2020
 * Lab5.cpp
 * Completing lab 5 for CS201
 */

//Include
#include <iostream>

//Definitions
#define CONST_PI 3.141592653
#define CONST_E 2.718281828

//Using
using std::cout;
using std::endl;
using std::cin;

int main()
{
    while(true) {
        cout << "Welcome to my little menu!" << endl;
        cout << "1. Give me Pi" << endl;
        cout << "2. Give me e" << endl;
        cout << "3. Give me Pi/e" << endl;
        int choice;
        cin >> choice;
        switch(choice) {
	    case 1:
	        cout << CONST_PI << endl;
	        break;
	    case 2:
	        cout << CONST_E << endl;
	        break;
	    case 3:
	        cout << CONST_PI/CONST_E << endl;
	        break;
	    default:
    	        cout << "That is not a valid choice!" << endl;
	        break;
        } //End switch

    } //End while

}
