#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
using std::cout;
using std::endl;

class Thermostat {
public:

  void perceive(Room r) {
    if(r.getTemp() < _minTemp) {
      _heaterOn = true;
    }

    if(r.getTemp() > _maxTemp) {
      _heaterOn = false;
    }
  }

private:

  int _roomTemp = -1;
  int _minTemp = 68;
  int _maxTemp = 75;
  bool _heaterOn = false;

};

#endif
