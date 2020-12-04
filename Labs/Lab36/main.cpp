#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

void flags(int num) {
  for(int i = 0; i < sizeof(int) * 8; i++) {
    cout << std::to_string(num & 1) << " ";
    num = num >> 1;
  }
  cout << endl;
}

int main() {
  //Just some numbers
  flags( 252 );

  flags( 577 );

  flags( 536889 );

  cout << endl;

  //Passing some real flags now
  flags( 1 );
  flags( 2 );
  flags( 4 );
  flags( 8 );
  flags( 8 + 4 );
  flags( 5 | 84 );

  flags( pow(2, (sizeof(int)-1) * 8 ) );
  flags( pow(2, (sizeof(int)-1) * 8 ) - 1 );
  flags( -1 );
}
