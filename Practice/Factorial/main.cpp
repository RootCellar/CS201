/*
 * Darian Marvel
 * 9/14/2020
 * main.cpp
 * Trying out factorial using a recursive function
*/

//Includes
#include <iostream>

//Using Statements
using std::cout;
using std::cin;
using std::endl;

//Function declarations
int factorial(int n);

//main function
int main() {
	cout << factorial(10) << endl;
}

//Returns factorial of n as an int
//If there is a problem, returns -1
int factorial(int n) {
	if(n<0) return -1;
	if(n==0) return 1;
	if(n==1) return 1;
	return n * factorial(n-1);
}
