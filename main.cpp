#include <iostream>
#include <sys/socket.h>

using namespace std;

// https://www.cs.rutgers.edu/~pxk/417/notes/sockets/udp.html

int main() {
  cout << "Hello this is dog." << endl;

  // STEP 1: Creating a socket

  int domain = AF_INET;
  int type = SOCK_DGRAM;
  int protocol = 0; // SOCK_DGRAM only has one type of protocol

  int fd = socket(domain, type, protocol);

  // STEP 2: Assign a transport address to the socket
  //   -



  cout << "Goodbye." << endl;
  return 0;
}