/*
 * Darian Marvel
 * 11/10/2020
 * random-map.cpp
 * Comparing different methods of random number generation
*/

//Includes
#include "random-map.h"

//Generate a uniform random number from min to max
int RandomBetweenU(int min, int max) {
  random_device random;
  uniform_int_distribution<int> uniform(min, max);
  default_random_engine e1(random());

  return uniform(e1);

}
