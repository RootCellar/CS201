/*
 * Darian Marvel
 * 10/8/2020
 * tokenizer.cpp
 * Turning strings into tokens
*/

#include "tokenizer.h"

#define DEBUG true

void debug(string out) {
  cout << "[DEBUG] " << out << endl;
}

bool readLine(string& str){
  getline(cin, str);
  debug("Tokenizer: " + str);
  if(str.size() == 0) return false;
  else return true;
}

int stringToTokenWS(const string & input, vector<string> & tokens) {

}

void analyzeTokens(vector<string> & tokens) {

}
