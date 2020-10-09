/*
 * Darian Marvel
 * 10/8/2020
 * tokenizer.cpp
 * Turning strings into tokens
*/

#include "tokenizer.h"

#define DEBUG false

//Output a debug string
void debug(string out) {
  if(DEBUG) cout << "[DEBUG] " << out << endl;
}

//Determine if str is an integer
bool isInt(string str) {
  for(char c : str) {
    if( !(c <= '9' && c >= '0') ) {
      return false;
    }
  }
  return true;
}

//Determines if str is an identifier
bool isIdentifier(string str) {
  for(char c : str) {
    bool isValid = false;

    if( (c <= 'z' && c >= 'a') ) {
      isValid = true;
    }

    if( (c <= 'Z' && c >= 'A') ) {
      isValid = true;
    }

    if(c == '_') isValid = true;

    if(!isValid) return false;

  }

  return true;
}

//Reads a line to str, returns if it was empty or not
bool readLine(string& str){
  getline(cin, str);
  debug("Tokenizer: " + str);
  if(str.size() == 0) return false;
  else return true;
}

//Turns the string into tokens, returning how many tokens were processed
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

//Analyze the tokens, print them out along with what kind they are
void analyzeTokens(vector<string> & tokens) {

  for(int i = 0; i < tokens.size(); i++) {
    string token = tokens[i];
    if(token == "") {
      cout << "[whitespace]\t" << "\"" << token << "\"" << endl;
    }
    else if( token[0] == '\"' && token[token.size() - 1] == '\"' ) {
      cout << "[string]\t" << "\"" << token << "\"" << endl;
    }
    else if(isInt(token)) {
      cout << "[integer]\t" << "\"" << token << "\"" << endl;
    }
    else if(isIdentifier(token)) {
      cout << "[identifier]\t" << "\"" << token << "\"" << endl;
    }
    else {
      cout << "[other]\t" << "\"" << token << "\"" << endl;
    }
  }

}
