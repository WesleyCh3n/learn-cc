#include <iostream>

using namespace std;

class LazySingleton {
public:
  static LazySingleton& getInstance() {
    cout << "Get LazySingleton instance\n";
    if (gInstance == nullptr) {
      gInstance = new LazySingleton();
    }
    return *gInstance;
  }

  // copy contructor
  LazySingleton(const LazySingleton &) = delete;
  // assignment operator
  LazySingleton &operator=(const LazySingleton &) = delete;

private:
  static LazySingleton *gInstance;

  LazySingleton() { cout << "LazySingleton contructor called!\n"; }
  ~LazySingleton() { cout << "LazySingleton destructor called!\n"; }
};

/* class definition */
LazySingleton *LazySingleton::gInstance = nullptr;

/* main function */
int main(void) {
  cout << "Main started!\n";
  cout << "getInstance()    addr: " << &LazySingleton::getInstance() << '\n';
  LazySingleton& s = LazySingleton::getInstance();
  cout << "reference object addr: " << &s << '\n';
  return 0;
}
