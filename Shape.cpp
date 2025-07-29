#include <iostream>
using namespace std;

class Shape {
public:
  Shape(int r) { area(r); }

  Shape(int l, int b) { area(l, b); }

  void area(int r) { cout << "AREA: " << 3.14 * r * r << endl; }

  void area(int l, int b) { cout << "AREA: " << l * b << endl; }
};

int main() {
  int ch, l, b, r;
  cout << "1: circle\n2: square\n3: rectangle\n";
  cin >> ch;

  switch (ch) {
  case 1: {
    cout << "Enter radius: ";
    cin >> r;
    Shape circle(r);
    break;
  }
  case 2: {
    cout << "Enter side: ";
    cin >> l;
    Shape square(l, l);
    break;
  }
  case 3: {
    cout << "Enter length & breadth: ";
    cin >> l >> b;
    Shape rect(l, b);
    break;
  }
  default:
    cout << "Enter correct option" << endl;
    break;
  }
  return 0;
}
