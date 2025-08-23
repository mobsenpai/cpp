#include <iostream>
using namespace std;

class CopyC {
  int a;

public:
  CopyC() { a = 10; }

  CopyC(int x) { a = x; }

  CopyC(const CopyC &obj) { cout << obj.a; }
};

int main() {
  CopyC ob1;
  CopyC ob2(12);
  CopyC ob3(ob2);

  return 0;
}
