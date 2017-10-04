#include <iostream>
#include <sys/socket.h>


using namespace std;

// =-=-=-=-=-=-=-=-=-=
// ------- Foo -------
// =-=-=-=-=-=-=-=-=-=

class Foo {
  private:
    int fooNumber;

  public:
    int getFooNumber() { return fooNumber; }

    void setFooNumber(int fooNumber) {
      this -> fooNumber = fooNumber;
      cout << "fooNumber has been set to " << fooNumber << "." << endl;
    }

    explicit Foo(int);

    Foo();

    ~Foo();
};

Foo::Foo(int fooNumber) {
  cout << "Instantiating Foo class with fooNumber " << fooNumber << "..." << endl;
  this -> fooNumber = fooNumber;
}

Foo::Foo() {
  this -> fooNumber = 0;
}

Foo::~Foo() {
  cout << "Foo object deallocated." << endl;
}

// =-=-=-=-=-=-=-=-=-=
// ------- Bar -------
// =-=-=-=-=-=-=-=-=-=

class Bar: public Foo {
  private:
    int barNumber;

  public:
    int getBarNumber() { return barNumber; }

    void setBarNumber(int barNumber) {
      this -> barNumber = barNumber;
      cout << "barNumber has been set to " << barNumber << "." << endl;
    }

    explicit Bar(int);
    Bar();

    ~Bar();
};

Bar::Bar(int barNumber) {
  cout << "Instantiating Bar class with barNumber " << barNumber << "..." << endl;
  this -> barNumber = barNumber;
}

Bar::Bar() {
  this -> barNumber = 0;
}

Bar::~Bar() {
  cout << "Bar object deallocated." << endl;
}

// =-=-=-=-=-=-=-=-=-=
// ------- Main ------
// =-=-=-=-=-=-=-=-=-=

int main() {
  cout << "Hello, World!" << endl;

  Bar bar = Bar(2);
  cout << "Foo Number: " << bar.getFooNumber() << endl;
  cout << "Bar Number: " << bar.getBarNumber() << endl;

  bar.setBarNumber(10);
  bar.setFooNumber(1 + 2);
  cout << "Foo Number: " << bar.getFooNumber() << endl;
  cout << "Bar Number: " << bar.getBarNumber() << endl;

//  int sockfd = socket(AF_INET, SOCK_DGRAM, 0);

  return 0;
}