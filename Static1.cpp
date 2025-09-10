#include <iostream>
using namespace std;

class A {
  static int a;
  int b;

public:
  A() { cout << a + b << endl; }
  void sum() { cout << a + b << endl; }
};

int A::a = 5;

int main() {
  A obj1;
  obj1.sum();
}
