#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

using std::ifstream;
using std::ofstream;

class Vector3D {
public:

  double x;
  double y;
  double z;

  Vector3D() {
    x = 0;
    y = 0;
    z = 0;
  }

  double length() {
    return std::sqrt(x*x + y*y + z*z);
  }

};

int main() {

  ifstream input("vectors.txt");
  if(!input) {
    cout << "Error on read" << endl;
    exit(-1);
  }

  vector<Vector3D> vectors;

  bool going = true;
  while(going) {
    Vector3D newVector;
    input >> newVector.x;
    input >> newVector.y;
    input >> newVector.z;

    if(!input) {

      if(input.eof()) {
        cout << "Reached end of file" << endl;
        going = false;
        continue;
      }
      else {
        cout << "Error on read" << endl;
        exit(-1);
      }

    }

    vectors.push_back(newVector);

  }

  cout << "Read vectors from vectors.txt successfully" << endl;
  cout << vectors.size() << " vectors" << endl;

  input.close();

  ofstream out("lengths.txt");
  if(!out) {
    cout << "Error on write" << endl;
    exit(-1);
  }

  for(Vector3D v : vectors) {
    out << v.length() << endl;

    if(!out) {
      cout << "Error on write" << endl;
      exit(-1);
    }

  }

  cout << "Wrote vector lengths to lengths.txt successfully" << endl;

  out.close();

}
