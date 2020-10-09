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
bool intoVector(int i, vector<int>& v);
void bullsncows(int& bulls, int& cows, vector<int>& guess, vector<int>& answer);

int main() {
  vector<int> answer = {3,6,8,1};
  vector<int> guess;
  int entry;
}

//Find bulls and cows
void bullsncows(int& bulls, int& cows, vector<int>& guess, vector<int>& answer) {

  for(int i = 0; i < guess.size(); i++) {

    int g = guess[i];
    
    if(g == answer[i]) bulls++;
    else {
      for(int n : answer) if( g==n ) cows++;
    }

  }

}

//Place an int into a vector, returning if the int has 4 digits
bool intoVector(int i, vector<int>& v) {
  int digits = 0;
  while(i > 0) {
    int digit = i % 10;
    i /= 10;
    v.push_back(i);
    digits++;
  }

  return digits==4;
}

//Clear the given vector of ints
void clear(vector<int> v) {
  while(v.size() > 0) {
    v.pop_back();
  }
}
