#ifndef ROOM_H
#define ROOM_H

#include <iostream>
using std::cout;
using std::endl;

class Room {
public:

  int getTemp(){ return _temp; }

  void setHeaterOn(bool b){ _heater = b; }
  void iterate() {
    if(_heater) _temp++;
    else _temp--;
  }

private:

  int _temp = 72;
  bool _heater = false;

};

#endif
