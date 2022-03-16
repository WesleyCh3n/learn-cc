#include <iostream>
#include "eager_singleton.h"
#include "lazy_singleton.h"
#include "lazy_singleton_ref.h"
#include "meyer_singleton.h"

using namespace std;

int main(void) {
  cout << "Main started!\n";

  {
    cout << "getInstance()    addr: " << &EagerSingleton::getInstance() << '\n';
    EagerSingleton &s = EagerSingleton::getInstance();
    cout << "reference object addr: " << &s << '\n';
  }

  {
    cout << "getInstance()    addr: " << LazySingleton::getInstance() << '\n';
    LazySingleton *s = LazySingleton::getInstance();
    cout << "reference object addr: " << s << '\n';
  }

  {
    cout << "getInstance()    addr: " << &LazySingletonRef::getInstance()
         << '\n';
    LazySingletonRef &s = LazySingletonRef::getInstance();
    cout << "reference object addr: " << &s << '\n';
  }

  {
    cout << "getInstance()    addr: " << &MeyerSingleton::getInstance() << '\n';
    MeyerSingleton &s = MeyerSingleton::getInstance();
    cout << "reference object addr: " << &s << '\n';
  }
  return 0;
}
