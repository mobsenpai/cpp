#include <iostream>
using namespace std;

class Shape02 {
protected:
  int width, height;

public:
  Shape02() {
    width = 0;
    height = 0;
  }
  void input(int x, int y) {
    width = x;
    height = y;
  }
};

class PaintCost : public Shape02 {
public:
  int getCost() {
    int area = width * height;
    int cost = area * 0.7;
    return cost;
  }
};

class Rectangle : public PaintCost {
public:
  Rectangle(int x, int y) {
    input(x, y);
    cout << "Cost: " << getCost() << "rs" << endl;
  }
};

int main() {
  Rectangle r1(2, 4);
  return 0;
}
