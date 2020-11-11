/*
 * Darian Marvel
 * 11/10/2020
 * main.cpp
 * Using shopping.cpp to go shopping!
*/

#include "shopping.h"

int main() {
  vector<Item> cart;

  while(true) {
    cout << "      Menu      " << endl;
    cout << "----------------" << endl;
    cout << endl;

    cout << "1. View Available Items" << endl;
    cout << "2. View Cart" << endl;
    cout << "3. Put Item in Cart" << endl;
    cout << "4. Remove Item from Cart" << endl;
    cout << "5. Quit" << endl;

    int choice = getInt();

    if(choice == 1) {
      printMenu(getStoreItems());
    }
    if(choice == 2) {
      printCart(cart);
    }
    if(choice == 3) {
      cout << "What do you want to buy?" << endl;
      string name;
      cin >> name;
      cout << "How many?" << endl;
      int count = getInt();
      
    }
    if(choice == 4) {

    }
    if(choice == 5) exit(0);
  }
}
