#include <iostream>
using namespace std;

class Line {
  int len;

public:
  Line(int x) { len = x; }

  Line(const Line &ob) { len = ob.len; }

  int getLength() { return len; }
};

int main() {
  Line o1(2);
  Line o2 = o1;
  cout << "length using copy constructor: " << o2.getLength();

  return 0;
}
