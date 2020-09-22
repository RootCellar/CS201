/*
 * Darian Marvel
 * 9/21/2020
 * rice.cpp
 * Help that emporer find out exactly how much rice the inventor of chess wanted
 * (HW2, CS201)
*/

//Includes
#include <iostream>

//Using
using std::cout;
using std::cin;
using std::endl;

//Prototypes
int riceAtSquare(int n); //Calculate how many grains of rice on the nth square

int main() {
	//I think this can keep track of all that rice...
	//Later realized that it kinda can't, riceAtSquare also overflows and this breaks
	//dang...
	unsigned long long int totalBig = 0;

	//Also try the regular way
	int totalNormal = 0;

	cout << "Using an int and an unsigned long long int to keep track of grains of rice" << endl;

	int onSquare;
	for (int i = 1; i <= 64; i++) {
		cout << "Square " << i << ": ";
		onSquare = riceAtSquare(i);
		cout << onSquare << " ";
		totalBig += onSquare;
		totalNormal += onSquare;
		cout << "int: " << totalNormal << " ";
		cout << "unsigned long long int: " << totalBig;
		cout << endl;

		if (i == 31) {
			cout << endl;
			cout << "This is where it starts becoming hard to keep track of" << endl;
			cout << endl;
		}

	}

	cout << endl;
	cout << endl;
	cout << "Alas, we couldn't keep track of that many grains. That poor emporer..." << endl;

}

int riceAtSquare(int n) {
	if (n < 1) return -1;
	if (n == 1) return 1;
	return 2 * riceAtSquare(n - 1);
}