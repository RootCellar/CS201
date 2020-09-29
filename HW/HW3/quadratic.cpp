/*
 * Darian Marvel
 * 9/28/2020
 * quadratic.cpp
 * Solving quadratic equations with a computer!
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

bool canSolve(double a, double b, double c);
void solve(double a, double b, double c, double & sol1, double & sol2);

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

  double solution1, solution2 = 0;

  solve(a, b, c, solution1, solution2);

  cout << "Solution 1: " << solution1 << endl;
  cout << "Solution 2: " << solution2 << endl;
}

void solve(double a, double b, double c, double & sol1, double & sol2) {
  //Let's just make sure this is possible first...
  if(!canSolve(a,b,c)) return;

  double root = sqrt( pow(b,2) - 4 * a * c );

  sol1 = ( -1 * b ) + root;
  sol1 /= 2 * a;

  sol2 = ( -1 * b ) - root;
  sol2 /= 2 * a;
}

//Just check if this equation has any real roots
bool canSolve(double a, double b, double c) {
  double left = b * b;
  double right = 4 * a * c;
  if(left-right < 0) return false;
  else return true;
}
