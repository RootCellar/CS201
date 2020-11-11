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
      Item storeItem;
      bool inStore = findItemInList(name, getStoreItems(), storeItem);
      if(!inStore) {
        cout << "Item not available!" << endl;
        continue;
      }

      cout << "Item available, placing in cart..." << endl;

      Item cartItem;
      bool inCart = findItemInList(name, cart, cartItem);
      if(inCart) {
        cout << "You already have this in your cart! To adjust count, remove from cart and put back in" << endl;
        continue;
      }
      else {
        cartItem.name = name;
        cartItem.unitPrice = storeItem.unitPrice;
        cartItem.units = count;

        cart.push_back(cartItem);
      }

    }
    if(choice == 4) {
      string name;
      cout << "What Item?" << endl;
      cin >> name;
      bool removed = false;
      for(size_t i=0; i<cart.size(); i++) {
        if(cart.at(i).name == name) {
          cart.erase( cart.begin() + i );
          cout << "Removed" << endl;
          removed = true;
          break;
        }
      }
      if(!removed) cout << "Item not in cart!" << endl;
    }
    if(choice == 5) exit(0);
  }
}
