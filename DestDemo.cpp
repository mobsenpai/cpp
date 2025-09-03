#include <iostream>
using namespace std;

class DestDemo {
  int a, b;

public:
  DestDemo() {
    a = 5;
    b = 6;
  }
  DestDemo(int x, int y) {
    a = x;
    b = y;
  }
  ~DestDemo() { cout << "Object deleted" << endl; }
  void display() {
    cout << a << endl;
    cout << b << endl;
  }
};

int main() {
  DestDemo o1;
  o1.display();
  DestDemo o2(10, 20);
  o2.display();

  return 0;
}
