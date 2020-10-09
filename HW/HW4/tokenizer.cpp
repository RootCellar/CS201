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
  istringstream reader (input);
  string read = "";
  int totalRead = 0;

  while(reader) {
    reader >> read;
    if(!reader) {
      debug("stringtotoken: reached end. exiting...");
      break;
    }
    else {
      debug("stringtotoken: " + read);
      tokens.push_back(read);
      totalRead++;
    }
  }

  tokens.push_back("");
  return totalRead;

}

void analyzeTokens(vector<string> & tokens) {

}
