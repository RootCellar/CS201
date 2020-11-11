/*
 * Darian Marvel
 * 11/10/2020
 * shopping.cpp
 * Implementing some functions to let a user go shopping
*/

#include "shopping.h"

//Just returns a list of available items
vector<Item> getStoreItems() {
  vector<Item> storeItems = {
    {"Banana", 0.35, -1},
    {"Orange", 0.5, -1},
    {"PC", 900, -1},
    {"Notebook", 0.99, -1},
    {"Box of Tissues", 3.99, -1}
  };

  return storeItems;
}

//Print the list of available items
void printMenu(vector<Item> items) {
  cout << endl;
  for(Item i : items) {
    cout << i.name << ": $" << i.unitPrice << " / each" << endl;
  }
  cout << endl;
}

//Print the list of items in the cart
void printCart(vector<Item> items) {
  cout << endl;
  double total = 0;
  for(Item i : items) {
    cout << i.name << ": $" << i.unitPrice << " / each, " << i.unitPrice * i.units << " total."<< endl;
    total += i.unitPrice * i.units;
  }
  cout <<"Total: " << total << endl;
  cout << endl;
}

//Get an int from the user
int getInt() {
  int i;
  cin >> i;
  return i;
}
