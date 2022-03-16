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
