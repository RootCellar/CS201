#ifndef RANDOM_MAP_H
#define RANDOM_MAP_H

//DEFINES
#define RANGE_HIGH 9
#define RANGE_LOW 1
#define RAND_COUNT 10000

//Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

//Using
using std::map;
using std::cout;
using std::endl;
using std::round;

using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::random_device;
using std::default_random_engine;

int RandomBetweenU(int min, int max);
int RandomBetweenN(int min, int max);
int RandomBetween(int min, int max);
void PrintDistribution(const map<int,int> & numbers);

#endif
