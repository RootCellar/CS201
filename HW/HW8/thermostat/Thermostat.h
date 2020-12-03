#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Thermostat {
public:

  void perceive(Room r) {
    cout << _prefix << "perceiving room's temperature..." << endl;
    _roomTemp = r.getTemp();
  }

  void think() {
    if(_roomTemp < _minTemp) {
      cout << _prefix << "Room is too cold, deciding to turn the heater on..." << endl;
      _heaterOn = true;
    }

    if(_roomTemp >= _maxTemp) {
      cout << _prefix << "Room is too hot, deciding to turn the heater off..." << endl;
      _heaterOn = false;
    }
  }

  void act(Room r) {
    cout << _prefix << "Acting on the room..." << endl;
    r.setHeaterOn(_heaterOn);
  }

private:

  int _roomTemp = -1;
  int _minTemp = 68;
  int _maxTemp = 75;
  bool _heaterOn = false;

  string _prefix = "[Thermostat] ";

};

#endif
