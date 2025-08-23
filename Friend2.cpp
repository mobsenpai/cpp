#include <iostream>
using namespace std;

class Test {
  int a;

public:
  Test() { a = 10; }
  void print() { cout << a << endl; }
  friend void changeA(Test &obj);
};

void changeA(Test &obj) { obj.a = 5; }

int main() {
  Test ob1;
  ob1.print();
  changeA(ob1);
  ob1.print();

  return 0;
}
