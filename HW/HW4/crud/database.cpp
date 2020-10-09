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

}

//Delete record
bool deleteRecord(string& key) {

}

//Useful functions

//Allow user to enter information to construct the record
bool inputRecord(Account& account){

}

//Print a record out
bool printRecord(Account& account){

}
