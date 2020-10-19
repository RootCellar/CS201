#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

bool isSorted(vector<int> data) {
	if(data.size() < 2) return true;

	for(unsigned int i=0; i<data.size()-1; i++) {
		if(data[i] > data[i+1]) return false;
	}
	
	return true;
}

void print_range(int min, int max) {
	if(min > max) {
		//Guess we gotta swap them
		int c = max;
		max = min;
		min = c;
	}
	for(int i = min+1; i<max; i++) {
		cout << i << " ";
	}
	cout << endl;
}

void PrintSubStrings(string s) {
	int maxSize = s.size();
	for(int k=1; k<=maxSize; k++) {
		for(int i=0; i<s.size()+1-k; i++) {
			cout << s.substr(i,k) << " ";
		}
	}
}

int main() {
    int i = -20;
    while(i < 1999) {
	cout << i;
	i+=3;
    }
    cout << endl << endl;

    PrintSubStrings("abc");
    PrintSubStrings("Darian");
}
