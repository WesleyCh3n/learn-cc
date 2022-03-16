#include <iostream>

using namespace std;

class LazySingleton {
public:
  static LazySingleton* getInstance() {
    cout << "Get LazySingleton instance\n";
    if (gInstance == nullptr) {
      gInstance = new LazySingleton();
    }
    return gInstance;
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
