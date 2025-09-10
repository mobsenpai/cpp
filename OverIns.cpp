#include <iostream>
using namespace std;

class OverIns {
  int a, b;

public:
  OverIns() {
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
  }
  // Key points -
  // this should be global, so we used friend function to make it access private
  // data members
  // we can send the object by value or by reference both
  // by reference avoid creating a whole object, and saves memory
  friend ostream &operator<<(ostream &out, const OverIns &ob);
  // friend ostream &operator<<(ostream &out, OverIns ob);
};

ostream &operator<<(ostream &out, const OverIns &ob) {
  out << ob.a;
  out << ob.b;
  return out;
}

int main() {
  OverIns o1;
  cout << o1;
  return 0;
}
