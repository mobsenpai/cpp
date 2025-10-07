#include <iostream>
using namespace std;

class Base {
public:
  virtual ~Base() {
    cout << "Base destructor";
  } // like virtual functions, virtual keyword needs to be used here as well
    // when doing runtime polymorphism
    // otherwise only base destructor is called
};
class Derived : public Base {
public:
  ~Derived() { cout << "Derived destructor"; }
};

int main() {
  // Derived *o1 = new Derived();
  // delete o1;
  // the above showed no runtime polymorphism
  //
  // for runtime polymorphism -
  Base *ptr = new Derived();
  // the above syntax stores the variable on heap, which needs to be explicitly
  // cleaned using delete keyword
  delete ptr;

  // or

  // Derived o1;
  // Base *ptr = & o1;
  // the above syntax store the variable in stack which gets auto cleaned when
  // program goes out of scope, i.e terminates
}
