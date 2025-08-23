#include <iostream>
using namespace std;

class B {
public:
  void F() { cout << "Base class func called\n"; }
};

class D : public B {
public:
  void F() { cout << "Derived class func called\n"; }
};

int main() {
  B base;
  D derived;

  B *basePtr = &base;
  basePtr->F();

  basePtr = &derived;
  basePtr->F();

  return 0;
}
