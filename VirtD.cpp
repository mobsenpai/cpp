#include <iostream>
using namespace std;

class Shape {
public:
  virtual float calculateArea() = 0;
};

class Square : public Shape {
  float a;

public:
  Square(float l) { a = l; }
  float calculateArea() { return a * a; }
};

int main() {
  Shape *shape;
  Square s(3);
  shape = &s;
  int a1 = shape->calculateArea();
  cout << "Area of square is" << a1 << endl;

  return 0;
}
