#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
using std::cout;
using std::endl;
using std::endl;

#include <vector>
using std::vector;

class House {
public:

  House() {
    for(int i=0; i<3; i++) rooms.push_back(false);
  }

  House(int roomCount) {
    for(int i=0; i<roomCount; i++) rooms.push_back(false);
  }

private:

  vector<bool> rooms;

};

#endif
