/*
* Darian Marvel
* 8/31/2020
* HW0.cpp
* Doing HW0 for CS 201
* Printing "Hello, World!" 5 times
*/

//includes
#include <iostream>

//using statements
using std::cout;
using std::endl;
using std::cin;


//Main function
int main()
{
    //cout << "Hello World!" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Hello, World!" << endl;
    }

    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');
}
