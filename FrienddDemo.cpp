#include <iostream>
using namespace std;

class FrienddDemo {
  int a, b;

public:
  FrienddDemo() {
    a = 5;
    b = 4;
  }
  friend int add(FrienddDemo ob);
};

int add(FrienddDemo ob) { return ob.a + ob.b; }

int main() {
  FrienddDemo o1;
  cout << add(o1);
}
