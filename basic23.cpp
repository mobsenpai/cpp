#include <iostream>
using namespace std;

int main() {
  int a = 4, b = 2, c = -1;
  cout << (a / (b++)) - (--b) - (--c);
  cout << a % b-- - --b - --c;
}
