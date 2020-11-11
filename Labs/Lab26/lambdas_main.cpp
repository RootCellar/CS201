/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.
	std::vector< std::pair<std::size_t, std::string> > data;

	for(std::size_t i = 0; i < WIKIPEDIA_CPP.size(); i++) {
		data.push_back( {i, WIKIPEDIA_CPP.at(i) });
	}


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.
	std::sort(data.begin(), data.end(), [](std::pair<std::size_t, std::string> one, std::pair<std::size_t, std::string> two) {
		return one.first > two.first;
	});


	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector
	std::string out = printVectorPairs(data.begin(), data.end());
	std::cout << out << std::endl;

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}
