#include "truncstruct.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string input;

  cout << "Enter a string to be truncated: ";
  cin >> input;
  cout << endl;

  StringInfo info = trunc8(input);

  cout << "String: " << info.str << endl;
  cout << "Length: " << info.len << endl;
}
