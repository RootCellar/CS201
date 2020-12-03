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

private:

  vector<bool> rooms;
  string prefix = "[HOUSE] ";

};

#endif
