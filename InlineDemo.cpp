#include <iostream>
using namespace std;

class InlineDemo {
  int a, b;

public:
  InlineDemo() {
    a = 5;
    b = 2;
  }

  inline int add() { return a + b; }
};

int main() {
  InlineDemo o1;
  cout << o1.add();
}
