/*
 * Darian Marvel
 * 11/25/2020
 * Server.cpp
 * Handling the server side for a chat server
*/

#include "../Chat.h"

int main() {
  int serverSocket, clientSocket, valread;
  sockaddr_in address;
  int opt = 1;
  int addrlen = sizeof(address);
  char buffer[BUFFER_SIZE] = {0};
  string message = "Hello! I have received your connection.";

  serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  if(serverSocket == 0) {
    cout << "Can't create socket" << endl;
    exit(0);
  }

  bool sockOpt = setsockopt(serverSocket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt));
  if(sockOpt) {
    cout << "Can't set socket options" << endl;
    exit(0);
  }

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons( PORT );

  int bound = bind( serverSocket, (sockaddr *) &address, sizeof(address) );

  if(bound < 0) {
    cout << "Can't bind the socket" << endl;
    exit(0);
  }

  int didListen = 0;
  while(true) {
    didListen = listen(serverSocket, 3);

    if(didListen < 0) {
      cout << "Can't listen on the socket" << endl;
      exit(0);
    }

    clientSocket = accept(serverSocket, (sockaddr *) &address, (socklen_t*) &addrlen);

    if(clientSocket < 0) {
      cout << "Can't accept client socket" << endl;
      exit(0);
    }

    send(clientSocket, message.c_str(), message.size(), 0);

  }

}
