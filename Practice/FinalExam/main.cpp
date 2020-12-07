#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <random>
#include <algorithm>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

using std::map;


int main() {

  auto cube = [](int n) { return n * n * n; };

  //later…

  int y = cube(8) * cube(7); //y equals 175,616

  cout << y << endl;

  std::vector<int> haystack;
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(haystack.begin(), haystack.end(), g);
  int needle = rd();

  cout << haystack.size() << endl;
  cout << needle << endl;

  //find the needle

  auto iter = find(haystack.begin(), haystack.end(), needle);

  if(iter == haystack.end()) {
    cout << "Needle not found!" << endl;
  }
  else {
    cout << "Needle found!" << endl;
    cout << *iter << endl;
  }

  // Suppose the haystack is sorted, find the needle
  std::sort(haystack.begin(), haystack.end());

  auto it = lower_bound(haystack.begin(), haystack.end(), needle);

  if(it == haystack.end()) {
    cout << "Needle not found!" << endl;
  }
  else {
    cout << "Needle found!" << endl;
    cout << *it << endl;
  }

}
