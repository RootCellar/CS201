/*
 * Darian Marvel
 * 11/10/2020
 * main.cpp
 * Using random-map.cpp to compare methods of random number generation
*/

#include "random-map.h"

int main() {
  cout << "RAND_MAX: ";
  cout << RAND_MAX << endl << endl;

  map<int, int> hist1;
  for(int i = 0; i < RAND_COUNT; i++) {
    hist1[ RandomBetweenU(RANGE_LOW, RANGE_HIGH) ]++;
  }

  map<int, int> hist2;
  for(int i = 0; i < RAND_COUNT; i++) {
    hist2[ RandomBetweenN(RANGE_LOW, RANGE_HIGH) ]++;
  }

  map<int, int> hist3;
  for(int i = 0; i < RAND_COUNT; i++) {
    hist3[ RandomBetween(RANGE_LOW, RANGE_HIGH) ]++;
  }

  cout << "Uniform" << endl;
  PrintDistribution(hist1);
  cout << endl;

  cout << "Normal" << endl;
  PrintDistribution(hist2);
  cout << endl;

  cout << "C Way" << endl;
  PrintDistribution(hist3);
  cout << endl;
}
