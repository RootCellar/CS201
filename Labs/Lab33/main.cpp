
#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;

class Student {
private:

  int _ID;
  string _name;

public:

  Student() {
    _ID = -1;
    _name = "NOT SET";
  }

  void setID(int i) {
    _ID = i;
  }

  void setName(string s) {
    _name = s;
  }

  int getID() { return _ID; }
  string getName() { return _name; }

  string toString() {
    return "{ Name: " + _name + ", ID: " + std::to_string(_ID) + " }";
  }

};

int main() {

  Student one;
  Student two;

  one.setID(6);
  one.setName("James");

  two.setID(13);
  two.setName("Charles");

  cout << one.toString() << endl;
  cout << two.toString() << endl;

}
