/*
 * Darian Marvel
 * 11/25/2020
 * Client.cpp
 * Handling the client side for a chat server
*/

#include "../Chat.h"

int main() {
  int socketToServer = 0;
  int amtRead = 0;

  sockaddr_in serv_addr;

  char buffer[BUFFER_SIZE] = {0};

  socketToServer = socket(AF_INET, SOCK_STREAM, 0);
  if(socket < 0) {
    cout << "Can't create socket" << endl;
    exit(0);
  }

  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons( PORT );

  int success = inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);
  if(success <= 0) {
    cout << "Can't set up socket" << endl;
    exit(0);
  }

  success = connect(socketToServer, (sockaddr*) &serv_addr, sizeof(serv_addr));
  if(success < 0) {
    cout << "Can't connect" << endl;
    exit(0);
  }

  cout << "Connected. Receiving message from server..." << endl;
  amtRead = read(socketToServer, buffer, BUFFER_SIZE);
  cout << "[DEBUG] " << amtRead << " bytes" << endl;
  cout << buffer << endl;

}
