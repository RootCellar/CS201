/*
 * Darian Marvel
 * 10/6/2020
 * main.cpp
 * Learning about modern initialization and iteration with a vector
*/

#include "vector_main.h"

using std::cout;
using std::endl;

int main() {
    vector<string> strings = {"I", " am", " the", " eggman.", " I", " am", " the", " eggman.", " I", " am", " the", " walrus!" };
    
    cout << endl;
    cout << "-------------------Required--------------------------" << endl;

    printVector(strings);

    cout << endl << endl;
}
