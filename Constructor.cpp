#include <iostream>

class Rect {
  int l, b, a;

public:
  Rect() { // should be the same as class name
    l = 10;
    b = a = 0;
  }

  void input() {
    std::cout << "Enter l & b: ";
    std::cin >> l >> b;
  }

  int area() { return l * b; }

  void print() { std::cout << "L=" << l << "B=" << b << "Area=" << area(); }
};

int main() {
  Rect r;
  r.print();
  r.input();
  r.print();

  return 0;
}
