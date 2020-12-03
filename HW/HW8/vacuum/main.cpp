/*
 * Darian Marvel
 * 12/2/2020
 * main.cpp
 * Simulating a smart vacuum cleaner cleaning rooms
*/

#include "House.h"
#include "Vacuum.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

  House h;
  Vacuum v;

  int choice = 0;

  while(true) {
    v.printHouse(h);
    cout << endl;
    cout << "1. Simulate" << endl;
    cout << "2. Quit" << endl;

    cin >> choice;

    if(choice == 1) {
      v.think(h);
      v.act(h);
      h.iterate();
    }
    if(choice == 2) {
      exit(0);
    }

  }

}
