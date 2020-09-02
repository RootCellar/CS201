/*
* Darian Marvel
* 9/2/2020
* Game.cpp
* Doing HW0 for CS 201
* Printing a description of one of my favorite games
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
    
    cout << "World of Tanks" << endl;
    cout << "This is one of my favorite video games,";
    cout << "and in it, you drive a tank from WWI all the way up to the cold war, ";
    cout << "and participate in online battles" << endl;

    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');
}
