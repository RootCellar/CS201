/*
 * Darian Marvel
 * 9/28/2020
 * HW3.cpp
 * Completing HW3 for CS201
 * In this assignment, we are printing words
 * surrounded in a box!
*/

#include "HW3.h"

int main() {
  int layers;
  string input;

  while(true) {
    cout << "Enter in a string to put in a box: ";
    cin >> input;
    cout << endl;

    bool valid = false;
    while(!valid) {

      cout << "Enter the numbers of layers of the box (-1 to quit): ";
      cin >> layers;
      cout << endl;
      if(layers == -1) {
        return 1;
      }
      if(layers > 0) valid = true;
    }


    printBox(input, layers);
  }
}
