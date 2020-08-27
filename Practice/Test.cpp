/*
 *
 * Darian Marvel
 * 8/26/2020
 * Reading about C++, trying some things out
 *
 */

//C++ Includes
//none

//Library Includes
#include "Test.h"


using namespace std;


//Functions

int main() {
    printLine("Hello, World!");

    //Method of speedtest 1: loop
    /*
    long long int count=0;
    auto start = std::chrono::system_clock::now();
    while(true) {
      count++;
      auto end = std::chrono::system_clock::now();
      std::chrono::duration<double> elapsed = end - start;

      if(elapsed.count() > 1.0) {
        std::cout << "Elapsed time: " << elapsed.count() << "s\n";
        std::cout << "Count: " << count << "\n";
        start = std::chrono::system_clock::now();
        count = 0;
      }
    }
    */

    //Method of speedtest 2: loop, then find elapsed
    auto start = std::chrono::system_clock::now();
    for(long long int i=0; i < 1000000000; i++) {}
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed: " << elapsed.count() << "s\n";

    return 0;
}
