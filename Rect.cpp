#include <iostream>

class Rect {
  int l, b;

public:
  void input() {
    std::cout << "Enter l & b: ";
    std::cin >> l >> b;
  }
  Rect add(Rect c); // prototype should have the same parameters
  int area() { return l * b; }
  void print() {
    std::cout << "\nAREA: " << area();
  }; // area should be declared before calling it in print
};

Rect Rect::add(Rect c) {
  Rect t;
  t.l = l + c.l;
  t.b = b + c.b;
  return t;
}

int main() {
  Rect r1, r2, r3;
  r1.input();
  r2.input();
  r3 = r1.add(r2);
  r3.print();

  return 0;
}
