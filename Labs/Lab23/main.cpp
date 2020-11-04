#include <iostream>
#include <map>
#include <string>


using std::cout;
using std::endl;

using std::string;
using std::map;
using std::pair;

int main() {
  map<int, string> students;
  students.insert( {6, "Darian"} );
  students.insert( {4, "John"} );
  students.insert( {16, "James"} );
  students.insert( {9, "Cameron"} );
  students.insert( {1, "Zach"} );
  students.insert( {7, "Ben"} );

  students.erase(7);

  cout << "     " << "Students" << "     " << endl;
  cout << "-----" << "--------" << "-----" << endl;

  for(auto student : students) {
    cout << "ID: " << student.first << " Name: " << student.second << endl;
  }
}
