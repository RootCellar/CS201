/*
 *
 * Darian Marvel
 * 9/21/2020
 * HW2.cpp
 * Completing the main program for HW2 for CS201
 * 
*/

//Includes
#include <iostream>
#include <vector>

//Constants
#define DEBUG_PREFIX "[DEBUG]"

//Using Statements
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//Function Prototypes
void InputNames(vector<string>& names); //Input list of names
bool DoesNameExist(const string& name, const vector<string> names); //Does this name exist in the list?
void PrintNames(const vector<string>& names); //List out the names
int getTotalNameLength(const vector<string>& names); //List the names, but how long each is, and the total

void debug(const string out);

int main()
{
    vector<string> names;

    InputNames(names);
}

void debug(const string out) {
    cout << DEBUG_PREFIX << " " << out << endl;
}

void InputNames(vector<string>& names) {
    string in;
    while (true) {
        cout << "Enter a name (Name of length < 2 will stop): ";
        cin >> in;
        cout << endl;
        if (in.size() < 2) break;
        names.push_back(in);
        cout << "Now have " << names.size() << " names." << endl; //Kinda debug, kinda tell them how many names are in the list
    }

}
