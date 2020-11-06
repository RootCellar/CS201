#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::reverse;
using std::fill;

void printVector(vector<int> data) {
  cout << endl;
  for(int i : data) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> data = { 6, 1, 3, 9, 7, 22, 8, 4, 2, 5, 14 };

  cout << "Data" << endl;
  printVector(data);
  cout << endl;

  cout << "Sort" << endl;
  sort(data.begin(), data.end());
  printVector(data);
  cout << endl;

  cout << "Reverse" << endl;
  reverse(data.begin(), data.end());
  printVector(data);
  cout << endl;

  cout << "Fill" << endl;
  fill(data.begin()+1, data.end()-4, 6);
  printVector(data);
  cout << endl;
}
