#include <iostream>
using namespace std;

class A {
public:
  inline void show() { cout << "class A"; }
};

int main() {
  A o1;
  o1.show();
}
