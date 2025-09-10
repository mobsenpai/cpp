#include <iostream>
using namespace std;

template <typename T1, typename T2>

class Add {
  T1 a;
  T2 b;

public:
  Add(T1 a, T2 b) : a(a), b(b) { cout << a + b << endl; }
};

int main() {
  Add<int, int> a1(42, 44);
  Add<float, float> a2(42.2, 44.3);
}
