#ifndef CHAT_H
#define CHAT_H

//Defines

//Defining this so client always knows what port to connect to,
//and server always knows where to bind the socket
#define PORT 8000

#define BUFFER_SIZE 1024

//Normal C++ Headers
#include <thread>
#include <iostream>
#include <string>

//C Headers - C++ doesn't seem to have it's own socket headers
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

//Using statements
using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::to_string;

using std::thread;


class SocketHandler
{
private:

  bool isConnected;

public:



};

#endif
