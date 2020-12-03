#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Thermostat {
public:

  void setMinTemp(int i) { _minTemp = i; }
  void setMaxTemp(int i) { _maxTemp = i; }

  void perceive(Room r) {
    cout << _prefix << "Checking the room temperature..." << endl;
    _roomTemp = r.getTemp();
    cout << _prefix << "Room Temperature: " << _roomTemp << endl;
  }

  void think() {
    if(_roomTemp <= _minTemp) {
      cout << _prefix << "Low temp is set to " << _minTemp << ". Turning the heat on..." << endl;
      _CallforHeat = true;
    }

    if(_roomTemp >= _maxTemp) {
      cout << _prefix << "High temp is set to " << _maxTemp << ". Turning the heat off..." << endl;
      _CallforHeat = false;
    }
  }

  void act(Room & r) {
    if( r.isHeatOn() != _CallforHeat ) r.setHeaterOn(_CallforHeat);
  }

private:

  int _roomTemp = -1;
  int _minTemp = 68;
  int _maxTemp = 75;
  bool _CallforHeat = false;

  string _prefix = "[Thermostat] ";

};

#endif
