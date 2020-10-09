/*
 * Darian Marvel
 * 10/8/2020
 * bulls-and-cows.cpp
 * Making the bulls and cows number guessing game
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;

using std::vector;
using std::string;

void clear(vector<int> v);

int main() {
  vector<int> answer = {3,6,8,1};
  vector<int> guess;
}

//Clear the given vector of ints
void clear(vector<int> v) {
  while(v.size() > 0) {
    v.pop_back();
  }
}
