#include <iostream>

class Quad {
  int s1, s2;

public:
  int area();
  void input() {
    std::cout << "Enter side1 and side 2: ";
    std::cin >> s1 >> s2;
  }
  void print() { std::cout << "AREA: " << area(); }
};

int Quad::area() {
  if (s1 == s2) {
    std::cout << "It is a square\n";
  } else {
    std::cout << "It is a rectangle\n";
  }

  return s1 * s2;
}

int main() {
  Quad q;
  q.input();
  q.print();
}
