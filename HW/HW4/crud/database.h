#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <map>
#include <iostream>

#define LINE "----------"

using std::map;
using std::string;

using std::cin;
using std::cout;
using std::endl;

struct Account {
  double balance = 0.0;
};

//CRUD
bool createRecord(string& key);
bool readRecord(string& key, Account& account);
bool updateRecord(string& key, const Account& account);
bool deleteRecord(string& key);

//Useful functions
bool inputRecord(Account& account);
bool printRecord(Account& account);
map<string, Account> getDatabase();

#endif
