/*
 * Darian Marvel
 * 9/3/2020
 * Lab2.cpp
 * Asking a user for an integer, then squaring (their integer + 1)
 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int enteredNumber = 0;
    cout << "Enter an integer: "; //No endl so that the number goes on the same line
    cin >> enteredNumber;

    cout << endl; //...now we end the line.

    cout << "You entered: " << enteredNumber << endl;

    int outputNumber = enteredNumber + 1;
    outputNumber = outputNumber * outputNumber;

    cout << "(Your Number + 1)^2 =  " << outputNumber << endl;

    cin.get(); //Grabbing the number up above doesn't clear the ENTER

    /* //This is causing problems when typing a letter/word - spike in CPU usage
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');
    */

}
