#ifndef ROOM_H
#define ROOM_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Room {
public:

  Room() {
    _heaterOn = 1;
  }

  int getTemp(){ return _temp; }
  bool isHeatOn() { return _heaterOn; }

  void setHeaterOn(bool b) {
    if(b) cout << _prefix << "Turning the heater on..." << endl;
    else cout << _prefix << "Turning the heater off..." << endl;

    _heaterOn = b;

    cout << _prefix << "[DEBUG] _heater: " << _heaterOn << endl;
  }

  void iterate() {
    cout << _prefix << "Heat was: " << _temp << endl;

    cout << _prefix << "[DEBUG] _heater: " << _heaterOn << endl;

    if(_heaterOn) {
      cout << _prefix << "Heater on, heating up..." << endl;
      _temp++;
    }
    else {
      cout << _prefix << "Heater off, cooling off..." << endl;
      _temp--;
    }

    cout << _prefix << "Heat is: " << _temp << endl;

  }

private:

  int _temp = 72;

  bool _heaterOn;

  string _prefix = "[Room] ";

};

#endif
