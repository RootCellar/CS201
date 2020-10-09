/*
 * Darian Marvel
 * 10/8/2020
 * tokenizer.cpp
 * Testing the tokenizer.cpp file
*/

#include "tokenizer.h"

int main() {
  string in;
  bool val = readLine(in);
  cout << val << endl;

  vector<string> lines;

  stringToTokenWS(in, lines);

  analyzeTokens(lines);

}
