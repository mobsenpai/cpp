#include <iostream>

template <class T>

T getMax(T a, T b) {
  T result;
  result = (a > b) ? a : b;
  return result;
}

int main() {
  int r1 = getMax(2, 3);
  int r2 = getMax(2.4, 3.1);
  std::cout << r1 << std::endl;
  std::cout << r2 << std::endl;

  return 0;
}
