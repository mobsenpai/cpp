#include <iostream>
using namespace std;

class OverOp2 {
  int a, b;

public:
  OverOp2() {
    a = 0;
    b = 0;
  }
  OverOp2(int x, int y) {
    a = x;
    b = y;
  }

  OverOp2 operator+(OverOp2 ob);
  OverOp2 operator-(OverOp2 ob);

  void print() {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
  }
};

OverOp2 OverOp2 ::operator+(OverOp2 ob) {
  OverOp2 t;
  t.a = a + ob.a;
  t.b = b + ob.b;
  return t;
}

OverOp2 OverOp2 ::operator-(OverOp2 ob) {
  OverOp2 t;
  t.a = a - ob.a;
  t.b = b - ob.b;
  return t;
}

int main() {
  OverOp2 o1(2, 4), o2(3, 6), o3;
  o3 = o1 + o2;
  o3.print();
  return 0;
}
