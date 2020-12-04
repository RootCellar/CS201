#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using std::string;

class Student {

public:
  Student();

  Student(string s);

  Student(string s, int i);

  void printInfo() const;

private:
  string _name;
  int _id;
};

#endif
