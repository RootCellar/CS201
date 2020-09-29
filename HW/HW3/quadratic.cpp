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
  double a, b, c;

  cout << "Time to solve a quadratic equation!" << endl;

  cout << "Enter a: ";
  cin >> a;
  cout << endl;

  cout << "Enter b: ";
  cin >> b;
  cout << endl;

  cout << "Enter c: ";
  cin >> c;
  cout << endl;

  if( !canSolve(a,b,c) ) {
    cout << "Sorry, but that equation has no real roots!" << endl;
    return 1;
  }



}

//Just check if this equation has any real roots
bool canSolve(double a, double b, double c) {
  double left = b * b;
  double right = 4 * a * c;
  if(left-right < 0) return false;
  else return true;
}
