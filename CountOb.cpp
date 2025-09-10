#include <iostream>
using namespace std;

class CountOb {
public:
  static int count;
  CountOb() { count++; }
};

int CountOb::count = 0;

int main() {
  CountOb ob[4];
  cout << CountOb::count;

  return 0;
}
