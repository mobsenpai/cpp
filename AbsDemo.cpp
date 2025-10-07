#include <iostream>
using namespace std;

class A {
public:
  virtual void check1() = 0;
  void check2() { cout << "Hello"; }
};

class B : public A {
public:
  void check1() { cout << "Hello from B"; }
};

int main() {
  B o2;
  A *ptr;
  ptr = &o2;
  ptr->check1();

  return 0;
}
