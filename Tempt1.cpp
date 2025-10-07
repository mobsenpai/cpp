#include <iostream>
using namespace std;

template <class T>

class A {
  T a;
  T b;

public:
  A(T a, T b) {
    this->a = a;
    this->b = b;
  }
  T add() { return a + b; }
  T sub() { return a - b; }
};

int main() {
  A<int> o1(2, 3);
  cout << o1.add() << endl;
  A<float> o2(2.4, 3.2);
  cout << o2.sub() << endl;

  return 0;
}
