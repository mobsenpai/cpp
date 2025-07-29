#include <iostream>

class Rect {
  int l, b;

public:
  int area();
  void input() {
    std::cout << "Enter length and breadth: ";
    std::cin >> l >> b;
  }
  void print() { std::cout << area(); };
};

int Rect::area() { return l * b; }

int main() {
  Rect r;
  r.input();
  r.print();
}
