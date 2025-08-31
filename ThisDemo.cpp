#include <iostream>
using namespace std;

class ThisDemo {
  int a;

public:
  ThisDemo() { a = 10; }

  void output() {
    int a = 5;
    cout << "Local variable: " << a << endl;
    cout << "Member variable: " << this->a << endl;
  }
};

int main() {
  ThisDemo o1;
  o1.output();
  return 0;
}
