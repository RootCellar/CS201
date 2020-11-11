#ifndef SHOPPING_H
#define SHOPPING_H

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

struct Item {
  string name;
  double unitPrice;
  int units;
};

void printMenu(vector<Item> items);
void printCart(vector<Item> items);
vector<Item> getStoreItems();
bool findItemInList(string name, vector<Item> list, Item &toRet);

int getInt();

#endif
