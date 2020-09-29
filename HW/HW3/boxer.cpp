/*
 * Darian Marvel
 * 9/28/2020
 * boxer.cpp
 * Handling the logic behind putting words in neat boxes
*/

#include "HW3.h"

//Figure out how long each line will be.
//Useful mostly for the lines of asterisks preceding the words
int getLineLength(string words, int layers) {

  //length of string
  int total = words.size();

  //space to edge, one space on either side
  total += 2;

  //Rest of asterisks on either side
  total += layers * 2;

  return total;
}

//Used to print out the spaces and asterisks
void printStringTimes(string s, int n) {
  for(int i = 0; i < n; i++) {
    cout << s;
  }
}
