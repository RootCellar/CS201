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

    if(choice < 1 || choice > 6) {
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

    if(choice == 2) {
      cout << "Enter key: ";
      cin >> key;
      cout << endl;
      Account a;
      bool success = readRecord(key, a);
      if(!success) cout << "Read of record \"" << key << "\" failed" << endl;
      else cout << "Record Found!" << endl;
      printRecord(a);
    }

    if(choice == 3) {
      cout << "Enter key: ";
      cin >> key;
      cout << endl;
      Account a;
      inputRecord(a);
      bool success = updateRecord(key,a);
      if(!success) cout << "Update of record \"" << key << "\" failed" << endl;
      else cout << "Record updated successfuly" << endl;
    }

    if(choice == 4) {
      cout << "Enter key: ";
      cin >> key;
      cout << endl;
      bool success = deleteRecord(key);
      if(!success) cout << "Deletion of record \"" << key << "\" failed" << endl;
      else cout << "Record deleted successfuly" << endl;
    }

    if(choice == 5) {
      for(auto iteration : getDatabase()) {
        Account toPrint = iteration.second;
        cout << "Key: " << iteration.first << " ";
        printRecord(toPrint);
      }
    }

  }

}
