#include <iostream>

using namespace std;

class MeyerSingleton {
public:
  static MeyerSingleton& getInstance() {
    cout << "Get MeyerSingleton instance\n";
    static MeyerSingleton instance;
    return instance;
  }

  // copy contructor
  MeyerSingleton(const MeyerSingleton &) = delete;
  // assignment operator
  MeyerSingleton &operator=(const MeyerSingleton &) = delete;

private:
  MeyerSingleton() { cout << "MeyerSingleton contructor called!\n"; }
  ~MeyerSingleton() { cout << "MeyerSingleton destructor called!\n"; }
};

/* main function */
int main(void) {
  cout << "Main started!\n";
  cout << "getInstance()    addr: " << &MeyerSingleton::getInstance() << '\n';
  MeyerSingleton& s = MeyerSingleton::getInstance();
  cout << "reference object addr: " << &s << '\n';
  return 0;
}
