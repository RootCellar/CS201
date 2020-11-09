#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

using std::vector;
using std::mismatch;

int main() {
  //Main Data set
  vector<int> data1 = {3, 4, 5, 6, 7, 8};

  //Data set with something different
  vector<int> data2 = {3, 4, 5, 9, 7, 8};

  //Data set that is the same
  vector<int> data3 = {3, 4, 5, 6, 7, 8};

  auto ans1 = mismatch( data1.begin(), data1.end(), data2.begin() );

  if(ans1.first == data1.end()) {
    cout << "They match!" << endl;
  }
  else {
    cout << "They do not match!" << endl;
    cout << *ans1.first << " != " << *ans1.second << endl;
  }

    auto ans2 = mismatch( data1.begin(), data1.end(), data3.begin() );

    if(ans2.first == data1.end()) {
      cout << "They match!" << endl;
    }
    else {
      cout << "They do not match!" << endl;
      cout << *ans2.first << " != " << *ans2.second << endl;
  }

}
