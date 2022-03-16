#include <iostream>

using namespace std;

class LazySingletonRef {
public:
  static LazySingletonRef& getInstance() {
    cout << "Get LazySingletonRef instance\n";
    if (gInstance == nullptr) {
      gInstance = new LazySingletonRef();
    }
    return *gInstance;
  }

  // copy contructor
  LazySingletonRef(const LazySingletonRef &) = delete;
  // assignment operator
  LazySingletonRef &operator=(const LazySingletonRef &) = delete;

private:
  static LazySingletonRef *gInstance;

  LazySingletonRef() { cout << "LazySingletonRef contructor called!\n"; }
  ~LazySingletonRef() { cout << "LazySingletonRef destructor called!\n"; }
};
