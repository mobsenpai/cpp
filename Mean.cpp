#include <iostream>
using namespace std;

class Mean {
  int a, b;

public:
  Mean(int x, int y) {
    a = x;
    b = y;
  }
  friend int findMean(Mean ob);
};

int findMean(Mean ob) {
  int c = (ob.a + ob.b) / 2;
  return c;
}

int main() {
  Mean o1(4, 8);
  cout << "mean: " << findMean(o1);

  return 0;
}
