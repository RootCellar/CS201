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
    cout << "5. List Records" << endl;
    cout << "6. Quit" << endl;
    cout << ">";
    int choice;
    cin >> choice;
    cout << endl;

    if(choice < 1 || choice > 5) {
      cout << endl << "Invalid Choice!" << endl;
      continue;
    }

    if(choice == 6) return 1;

    string key;

    if(choice == 1) {
      cout << "Enter key: ";
      cin >> key;
      cout << endl;
      bool success = createRecord(key);
      if(!success) cout << "Creation of record \"" << key << "\" failed" << endl;
      else cout << "Success!" << endl;
    }

    if(choice == 5) {
      for(auto iteration : getDatabase()) {
        Account toPrint = iteration.second;
        printRecord(toPrint);
      }
    }

  }

}
