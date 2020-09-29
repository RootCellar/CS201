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
  int num;
  while(true) {

    cout << "Enter a number to run through the collatz sequence (-1 to quit): ";
    cin >> num;
    cout << endl;
    if(num == -1) {
      return 1;
    }
    if(num < 1) continue;

    collatz(num);
    cout << endl;
    cout << endl;

  }
}

//Run collatz sequence on n
void collatz(int n) {
  cout << n << " ";
  if(n == 1) return;

  if(n%2==0) collatz(n / 2);
  else collatz(3 * n + 1);
}
