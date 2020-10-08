#ifndef TOKENIZER_H
#define TOKENIZER_H

//Includes
#include <iostream>
#include <string>
#include <vector>

//Using statements
using std::cin;
using std::cout;
using std::getline;
using std::endl;

using std::string;
using std::vector;

//Function prototypes
bool readLine(string& str);
int stringToTokenWS(const string & input, vector<string> & tokens);
void analyzeTokens(vector<string> & tokens);

#endif
