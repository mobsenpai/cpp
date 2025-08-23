#include <iostream>
using namespace std;

class Clear {
  int n = 100;

public:
  void print() {
    for (int i = 0; i <= n; i++) {
      cout << endl;
    }
  }
};

int main() {
  cout << "hello";
  Clear o1;
  o1.print();

  return 0;
}
