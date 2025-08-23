#include <cmath>
#include <iostream>
using namespace std;

class Converter {
  int n;

public:
  Converter(int x) { n = x; }
  void toBinary() {
    int t = n, i = 0, b[20];
    while (t > 0) {
      int rem = t % 2;
      b[i] = rem;
      t = t / 2;
      i++;
    }

    // reverse
    cout << n << " to Binary: ";
    for (int j = i - 1; j >= 0; j--) {
      cout << b[j];
    }
    cout << endl;
  }

  void toDecimal() {
    int t = n, d = 0, i = 0;
    while (t > 0) {
      int rem = t % 10;
      d = d + (rem * pow(2, i));
      t = t / 10;
      i++;
    }

    cout << n << " to Decimal: " << d << endl;
  }
};

int main() {
  Converter o1(4);
  o1.toBinary();
  Converter o2(100);
  o2.toDecimal();

  return 0;
}
