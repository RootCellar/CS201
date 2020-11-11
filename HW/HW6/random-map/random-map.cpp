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

//Generate a normally distributed random number
int RandomBetweenN(int min, int max) {
  random_device random;
  mt19937 e1( random() );
  normal_distribution<> normal_dist( (min + max) / 2, 2);

  return normal_dist(e1);
}

//Generate a random number the C way
int RandomBetween(int min, int max) {
  return ( rand() % (max - min) ) + min;
}
