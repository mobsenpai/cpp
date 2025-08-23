#include <iostream>
using namespace std;

class SingleI {
protected:
  int a, b;

public:
  SingleI() {
    a = 10;
    b = 5;
  }

  void add() { cout << "a + b = " << a + b; }
};

class C1 : public SingleI {
public:
  void sub() { cout << "a - b = " << a - b; }
};

int main() {
  C1 ob1;
  ob1.add();
  ob1.sub();

  return 0;
}
