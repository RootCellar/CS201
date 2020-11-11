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
