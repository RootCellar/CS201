/*
 * Darian Marvel
 * 9/28/2020
 * collatz.cpp
 * Letting the user try a collatz sequence
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void collatz(int n);

int main() {
  //Test it out
  collatz(84);
  cout << endl;
  collatz(179);
  cout << endl;
}

//Run collatz sequence on n
void collatz(int n) {
  cout << n << " ";
  if(n == 1) return;

  if(n%2==0) collatz(n / 2);
  else collatz(3 * n + 1);
}
