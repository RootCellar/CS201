
/*
 * Darian Marvel
 * 9/3/2020
 * Lab3.cpp
 * Using while loops
 */


#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "----Part 1----";
    cout << endl;

    int i = 1; //Loop counter
    while (i < 21) {
        cout << i << " ";
        i++;
    }

    cout << endl;
    
    cout << endl << endl << endl;
    
    cout << "----Part 2----";
    cout << endl;

    i = 1;
    int k = 1;
    while (i < 11) {
        k = 0;
        while (k < 61) {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    
    cout << endl << endl << endl;

    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');
}
