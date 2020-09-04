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
    cout << "Enter an integer: ";
    cin >> enteredNumber;

    cout << endl;

    cout << "You entered: " << enteredNumber << endl;

    int outputNumber = enteredNumber + 1;
    outputNumber = outputNumber * outputNumber;

    cout << "(Your Number + 1)^2 =  " << outputNumber << endl;

    cin.get();
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');

}
