/*
 * Darian Marvel
 * 9/28/2020
 * quadratic.cpp
 * Solving quadratic equations with a computer!
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool canSolve(double a, double b, double c);

int main() {

}

//Just check if this equation has any real roots
bool canSolve(double a, double b, double c) {
  double left = b * b;
  double right = 4 * a * c;
  if(left-right < 0) return false;
  else return true;
}
