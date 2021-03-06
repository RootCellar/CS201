/*
 * Darian Marvel
 * 9/28/2020
 * boxer.cpp
 * Handling the logic behind putting words in neat boxes
*/

#include "HW3.h"

//Let's print this box out!
//Calls the rest of the functions to print the box successfully
void printBox(string in, int layers) {
  //First lines
  printLayerLines(layers, getLineLength(in, layers) );

  //Middle Lines
  printMiddleLines(in, layers);

  //Last lines
  printLayerLines(layers, getLineLength(in, layers) );

  //Well that was a little easy, huh?
}

//Handle the printing of the middle 3 lines
void printMiddleLines(string in, int layers) {
  int totalLen = getLineLength(in, layers);

  int midLen = in.size() + 2;

  int begLen = layers;

  //First line
  printStringTimes("*", begLen);
  printStringTimes(" ", midLen);
  printStringTimes("*", begLen);
  cout << endl;

  //Yay! now the actual String!
  printStringTimes("*", begLen);
  cout << " ";
  cout << in;
  cout << " ";
  printStringTimes("*", begLen);
  cout << endl;

  printStringTimes("*", begLen);
  printStringTimes(" ", midLen);
  printStringTimes("*", begLen);
  cout << endl;

}

//Useful for printing the beginning and ending lines
void printLayerLines(int layers, int length) {
  for( int i = 0; i < layers; i++) {
    printStringTimes("*", length);
    cout << endl;
  }
}

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
