#include <iostream>
using namespace std;

class Shape01 {
protected:
  int l, b;

public:
  Shape01() {
    cout << "Enter l,b: ";
    cin >> l >> b;
  }
};

class Rect : public Shape01 {
public:
  Rect() { area(); }
  void area() { cout << "Area of rectangle: " << l * b << endl; }
};

class Cuboid : public Shape01 {
protected:
  int h;

public:
  Cuboid() {
    cout << "Enter h: ";
    cin >> h;
    volume();
  }
  void volume() { cout << "Volume of cuboid: " << l * b * h << endl; }
};

int main() {
  Rect r1;
  Cuboid c1;
  return 0;
}
