/*
 * Darian Marvel
 * 9/21/2020
 * money.cpp
 * Doing an additional program for HW2, CS201
 */

//Includes
#include <iostream>

//Using
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Definitions
#define VALUE_PENNY 0.01
#define VALUE_NICKEL 0.05
#define VALUE_DIME 0.1
#define VALUE_QUARTER 0.25
#define VALUE_DOLLAR 1

struct Money;

//Prototypes
string getEnd(int n); //Return "s" if > 1, for "dimes" rather than "dime"
double toDouble(int n); //convert n to double
int getPositiveInt(); //Get a positive int from the user
double calculateWorth(Money m);

//Structure
struct Money {
	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int dollars;

	double totalValue;
};

int money() {
	int in;

	Money money;

	cout << "(All inputs are positive integers only)" << endl << endl;

	cout << "How many pennies do you have? ";
	in = getPositiveInt();
	cout << endl;
	money.pennies = in;

	cout << "How many nickels do you have? ";
	in = getPositiveInt();
	cout << endl;
	money.nickels = in;

	cout << "How many dimes do you have? ";
	in = getPositiveInt();
	cout << endl;
	money.dimes = in;

	cout << "How many quarters do you have? ";
	in = getPositiveInt();
	cout << endl;
	money.quarters = in;

	cout << "How many dollars do you have? ";
	in = getPositiveInt();
	cout << endl;
	money.dollars = in;

	money.totalValue = calculateWorth(money);

	cout << "You have a total of: $" << money.totalValue << endl;
}

double calculateWorth(Money m) {
	double value;
	double total = 0;

	value = toDouble(m.pennies);
	total += value * VALUE_PENNY;

	value = toDouble(m.nickels);
	total += value * VALUE_NICKEL;

	value = toDouble(m.dimes);
	total += value * VALUE_DIME;

	value = toDouble(m.quarters);
	total += value * VALUE_QUARTER;

	value = toDouble(m.dollars);
	total += value * VALUE_DOLLAR;

	return total;
}

int getPositiveInt()
{
    int num;
	while (true)
	{
		cin >> num;
		if (num < 0) continue;
		else return num;
	}
}

string getEnd(int n) {
	if (n > 1) return "s";
	else return "";
}

double toDouble(int n) {
	return (double)n;
}