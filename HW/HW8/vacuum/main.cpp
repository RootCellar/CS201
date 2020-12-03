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

  House h(7);
  Vacuum v;

  while(true) {
    v.printHouse(h);
    cout << endl;
    cout << "Enter: Simulate" << endl;
    cout << "Anything else: Quit" << endl;

    char c = cin.get();

    if(c == '\n') {
      v.think(h);
      v.act(h);
      h.iterate();
    }
    else {
      exit(0);
    }

  }

}
