/*
 * Darian Marvel
 * 10/8/2020
 * crud.cpp
 * implementing CRUD functions for a database
*/

#include "database.h"

int main() {
  while(true) {
    cout << endl << LINE << "Account Database" << LINE << endl;
    cout << "1. Create Record" << endl;
    cout << "2. Read Record" << endl;
    cout << "3. Update Record" << endl;
    cout << "4. Delete Record" << endl;
    cout << "5.  Quit" << endl;
    cout << ">";
    int choice;
    cin >> choice;
    cout << endl;

    if(choice < 1 || choice > 5) {
      cout << endl << "Invalid Choice!" << endl;
      continue;
    }

    if(choice == 5) return 1;

  }

}
