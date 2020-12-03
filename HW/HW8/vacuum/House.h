#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
using std::cout;
using std::endl;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

class House {
public:

  House() {
    for(int i=0; i<3; i++) rooms.push_back(true);
  }

  House(int roomCount) {
    for(int i=0; i<roomCount; i++) rooms.push_back(true);
  }

  int getSize() { return rooms.size(); }
  vector<bool> getRooms() { return rooms; }

  void setDirty(int n, bool b) {
    rooms[n] = b;
  }

  void iterate() {

    if(iterations > rooms.size() * 10) {
      iterations = -1;
    }

    if(iterations % 10 == 0) {
      int roomNum = iterations / 10;
      if(roomNum > rooms.size() || roomNum < 0) {
        rooms[0] = true;
      }
      rooms[roomNum] = true;
    }

    iterations++;
  }

private:

  vector<bool> rooms;
  string prefix = "[HOUSE] ";

  int iterations = 0;

};

#endif
