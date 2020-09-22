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



int HW2()
{
    vector<string> names;

    //Get list of names
    InputNames(names);
    cout << endl;

    //Check if some arbitrary name exists
    debug("Seeing if James is on the list...");
    bool doesExist = DoesNameExist("James", names);
    if (doesExist) cout << "True";
    else cout << "False";
    cout << endl;
    cout << endl;

    //Print names in list
    PrintNames(names);
    cout << endl;
    cout << endl;

    //Total length of names in list
    getTotalNameLength(names);
    cout << endl;
    

    //And that's it!
    return 0;
}

//Print out a string of debug info
void debug(const string out) {
    cout << DEBUG_PREFIX << " " << out << endl;
}

//Get an int of the total length of names in the list
int getTotalNameLength(const vector<string>& names) {
    int total = 0;
    for (int i = 0; i < names.size(); i++) {
        total += names.at(i).size();
        cout << names.at(i) << " : " << names.at(i).size() << endl;
    }
    cout << "Total: " << total << endl;
    cout << endl;
    return total;
}

//Print all names on the list
void PrintNames(const vector<string>& names) {
    cout << "Names in the list: " << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << names.at(i) << endl;
    }
}

//See if name is in the list
bool DoesNameExist(const string& name, const vector<string> names) {
    for (int i = 0; i < names.size(); i++) {
        debug("Checking " + name + " against " + names.at(i) );
        if (names.at(i) == name) return true;
    }
    return false;
}

//Input names from user, until a name's length is less than 2
void InputNames(vector<string>& names) {
    string in;
    while (true) {
        cout << "Enter a name (Name of length < 2 will stop): ";
        cin >> in;
        cout << endl;
        if (in.size() < 2) break;
        debug("Putting name in list...");
        names.push_back(in);
        cout << "Now have " << names.size() << " names." << endl; //Kinda debug, kinda tell them how many names are in the list
    }

}
