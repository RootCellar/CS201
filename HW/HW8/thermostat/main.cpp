/*
 * Darian Marvel
 * main.cpp
 * 12/2/2020
 * The simulator portion of this thermostat simulation
*/

#include "Room.h"
#include "Thermostat.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
  Thermostat therm;
  Room room;

  //Test for loop
  /*

  for(int i=0; i<30; i++) {
    therm.perceive(room);
    therm.think();
    therm.act(room);
    room.iterate();
  }

  */

  int choice = 0;

  while(true) {

    cout << endl << endl;
    cout << "1. Continue Simulating" << endl;
    cout << "2. Enter new temperature range" << endl;
    cout << "3. Quit" << endl;
    cout << ">";

    cin >> choice;
    cout << endl;

    if(choice == 1) {
      for(int i=0; i<10; i++) {

        cout << endl << endl;

        therm.perceive(room);
        therm.think();
        therm.act(room);
        room.iterate();
      }
    }
    if(choice == 2) {
      int max = 0;
      int min = 0;

      cout << "Enter maximum temp: ";
      cin >> max;
      cout << endl;

      cout << "Enter minimum temp: ";
      cin >> min;
      cout << endl;

      therm.setMinTemp(min);
      therm.setMaxTemp(max);

    }
    if(choice == 3) {
      break;
    }

  }

}
