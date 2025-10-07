#include <iostream>
using namespace std;

class Base {
public:
  virtual void show() { cout << "Base"; }
};
class Derived : public Base {
public:
  void show() { cout << "Derived"; }
};

int main() {
  Base *o1 = new Derived(); // runtime polymorphism enabled
  o1->show();
}
