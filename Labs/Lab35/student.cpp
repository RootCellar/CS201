#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "student.hpp"

Student::Student() {
  _id = 0;
  _name = "{NOT SET}";
}

Student::Student(string s) {
  _name = s;
  _id = 0;
}

Student::Student(string s, int i){
  _name = s;
  _id = i;
}

void Student::printInfo() const {
  cout << "[ ID: " << _id << ", NAME: " << _name << " ] ";
}
