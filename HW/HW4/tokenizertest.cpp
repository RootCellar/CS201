/*
 * Darian Marvel
 * 10/8/2020
 * tokenizer.cpp
 * Testing the tokenizer.cpp file
*/

#include "tokenizer.h"

int main() {
  /*
  string in;
  bool val = readLine(in);
  cout << val << endl;

  vector<string> lines;

  stringToTokenWS(in, lines);

  analyzeTokens(lines);
  */

  string in;
  vector<string> tokens;
  bool isValidLine;

  cout << "Type in some text. When done, type \"end\"" << endl;

  while(true) {
    isValidLine = readLine(in);
    if(!isValidLine) {
      continue;
    }
    else if(in == "end") {
      stringToTokenWS(in, tokens);
      cout << "Done." << endl;
      break;
    }
    else {
      stringToTokenWS(in, tokens);
    }
  }

  analyzeTokens(tokens);

}
