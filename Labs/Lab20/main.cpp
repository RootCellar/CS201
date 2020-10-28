#include <iostream>
#include <ios>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::setw;
using std::left;
using std::right;

int main() {
  cout << fixed << setprecision(8);
  for( int i=0; i <= 180; i += 5 ) {
    cout << setw(4) << right << i << " " << setw(14) << right << cos(i * (M_PI/180)) << endl;
  }
}
