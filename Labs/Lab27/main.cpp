
#include "random-map.h"

int main() {
  int heads = 0;
  int tails = 0;

  cout << heads << " " << tails << endl;

  int num;
  for(int i=0; i<1000; i++) {
    num = RandomBetweenU(1,2);
    if(num==1) heads++;
    if(num==2) tails++;
  }

  cout << "Heads: " << heads << endl;
  cout << "Tails: " << tails << endl;
  cout << "Flips: " << heads + tails << endl;
}
