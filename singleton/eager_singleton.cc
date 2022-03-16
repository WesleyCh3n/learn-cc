#include <iostream>
using namespace std;

class EagerSingleton {
public:
  static EagerSingleton &getInstance() {
    return gInstance;
  }

  // copy contructor
  EagerSingleton(const EagerSingleton &) = delete;
  // assignment operator
  EagerSingleton &operator=(const EagerSingleton &) = delete;

private:
  static EagerSingleton gInstance;

  EagerSingleton() { cout << "EagerSingleton contructor called!\n"; }
  ~EagerSingleton() { cout << "EagerSingleton destructor called!\n"; }
};

/* class definition */
EagerSingleton EagerSingleton::gInstance;

/* main function */
int main(void) {
  cout << "Main started!\n";
  cout << "getInstance()    addr: " << &EagerSingleton::getInstance() << '\n';
  EagerSingleton& s = EagerSingleton::getInstance();
  cout << "reference object addr: " << &s << '\n';
  return 0;
}
