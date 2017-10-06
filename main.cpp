#include <iostream>
#include <sys/socket.h>

using namespace std;

int main() {
  cout << "Hello, World!\n" << endl;

//  int sockfd = socket(AF_INET, SOCK_DGRAM, 0);

  int one = 1;
  int two = 2;
  int three = 3;

  int *oneP;

  oneP = &one;

  cout << "Output:" << endl;
  cout << one << endl;
  cout << *oneP << endl;

  return 0;
}