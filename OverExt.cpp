#include <iostream>
using namespace std;

class OverExt {
  int a, b;

public:
  OverExt() { cout << "Enter values of a and b: "; }
  // Key points -
  // Similar to insertion, but note the reference to object is witout 'const'
  // keyword, so as we can change the data members values
  friend istream &operator>>(istream &in, OverExt &ob);
};

istream &operator>>(istream &in, OverExt &ob) {
  in >> ob.a;
  in >> ob.b;
  return in;
}

int main() {
  OverExt o1;
  cin >> o1;

  return 0;
}
