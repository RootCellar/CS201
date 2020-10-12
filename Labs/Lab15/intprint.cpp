/*
*/


#include "intprint.h"

void intPrint(string s) {
    cout << "Trying \"" << s << "\"" << endl;
    istringstream reader(s);
    float num;

    reader >> num;

    if(!reader) {
	cout << "Not a number!" << endl;
	return;
    }

    num = num * num;
    cout << "The square is: " << num << endl;
}
