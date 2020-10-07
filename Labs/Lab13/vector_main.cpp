/*
 * Darian Marvel
 * 10/6/2020
 * vector_main.cpp
 * Printing out a vector using a range-based for loop
*/

#include "vector_main.h"

void printVector(vector<string> strings) {
    for(string s : strings) {
	cout << s;
    }
    cout << endl;
}
