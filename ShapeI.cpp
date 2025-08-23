#include <iostream>
using namespace std;

class ShapeI {
protected:
  int l, b, h;

public:
  ShapeI() {
    l = 5;
    b = 2;
    h = 4;
  }
};

class Rect : public ShapeI {
public:
  Rect(int l, int b) {
    this->l = l;
    this->b = b;
  }

  void area() { cout << "area of rectangle = " << l * b; }
};

class Cuboid : public ShapeI {
public:
  Cuboid(int l, int b, int h) {
    this->l = l;
    this->b = b;
    this->h = h;
  }

  void volume() { cout << "area of cuboid = " << l * b * h; }
};

int main() {
  Cuboid c1(2, 3, 4);
  c1.volume();
  Rect r1(2, 3);
  r1.area();
  return 0;
}
