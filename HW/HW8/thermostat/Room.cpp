/*
 * Darian Marvel
 * Room.cpp
 * 12/2/2020
 * The environment portion of this thermostat simulator
*/

#include "Room.h"

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
