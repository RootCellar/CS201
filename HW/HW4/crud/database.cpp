/*
 * Darian Marvel
 * 10/8/2020
 * database.cpp
 * Using crud.cpp
*/

#include "database.h"

map<string, Account> database;

//CRUD

//Create record
bool createRecord(string& key) {
  Account a;

  auto success = database.insert( std::make_pair(key, a) );
  return success.second;
}

//Read record
bool readRecord(string& key, Account& account) {
  auto loc = database.find(key);
  if(loc == database.end()) return false;

  account = loc->second;

  return true;
}

//Update record
bool updateRecord(string& key, const Account& account) {
  auto loc = database.find(key);
  if(loc == database.end()) return false;

  database.erase(key);
  auto success = database.insert( std::make_pair(key, account) );
  if(!success.second) {
    cout << "WARNING: managed to erase the old data, but could not insert new data" << endl;
  }
  return success.second;
}

//Delete record
bool deleteRecord(string& key) {
  auto loc = database.find(key);
  if(loc == database.end()) return false;

  database.erase(key);
  return true;
}

//Useful functions

//Allow user to enter information to construct the record
bool inputRecord(Account& account){

}

//Print a record out
bool printRecord(Account& account){
  cout << "Account: " << account.balance << endl;
  return true;
}
