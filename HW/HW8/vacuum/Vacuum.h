#ifndef VACUUM_H
#define VACUUM_H

#include <iostream>
using std::cout;
using std::endl;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

class Vacuum {
public:

  void think(House h) {
    vector<bool> rooms = h.getRooms();

    targetRoom = -1;
    for(size_t i=0; i<rooms.size(); i++) {
      if(rooms[i] == true) {
        targetRoom = i;
        break;
      }
    }

    if(targetRoom == -1) {
      cout << prefix << "No rooms to clean. Storing myself away..." << endl;
      action = 0;
    }

    if(targetRoom < position) {
      action = 0;
    }

    else if(targetRoom > position) {
      action = 1;
    }

    else{
      action = 3;
    }

  }

  void act(House h) {
    if(action == 0 && position > 0) {
      position--;
    }
    if(action == 1 && position < h.getSize()) {
      position++;
    }
    if(action == 2) {
      h.getRooms()[position] = 0;
    }

  }

  void printHouse(House h) {
    cout << "|";
    vector<bool> rooms = h.getRooms();
    for(size_t i=0; i<rooms.size(); i++) {
      if(position == i) {
        cout << "V|";
      }
      else cout << " |";
    }

    cout << endl;
    cout << "|";

    for(size_t i=0; i<rooms.size(); i++) {
      if(!rooms[i]) {
        cout << " |";
      }
      else cout << "D|";
    }

    cout << endl;

  }

private:

  int position = 0;
  int targetRoom = 0;

  int action = -1;

  string prefix = "[VACUUM] ";

};

#endif
