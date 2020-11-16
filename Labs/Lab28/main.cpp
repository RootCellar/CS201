#include <fstream>
#include <iostream>
#include <iomanip>

using std::ofstream;
using std::cout;
using std::endl;
using std::setw;

int main() {
  ofstream out("nums.txt");

  if(!out) {
    cout << "Can't write to file" << endl;
    exit(-1);
  }

  for(int i=0; i<10; i++) {

    for(int k=1; k<=10; k++) {

      out << setw(4) << k+10*i << " ";

      if(!out) {
        cout << "Can't write to file" << endl;
        exit(-1);
      }

    }

    out << endl;

  }

}
