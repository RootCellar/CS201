#ifndef ROOM_H
#define ROOM_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Room {
public:

  int getTemp(){ return _temp; }

  void setHeaterOn(bool b){ _heater = b; }
  void iterate() {
    if(_heater) {
      cout << _prefix << "Heater on, heating up..." << endl;
      _temp++;
    }
    else {
      cout << _prefix << "Heater off, cooling off..." << endl;
      _temp--;
    }
  }

private:

  int _temp = 72;
  bool _heater = false;

  string _prefix = "[Room] ";

};

#endif
