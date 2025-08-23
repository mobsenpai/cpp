#include <iostream>
using namespace std;

class Assignment {
  int a;

public:
  Assignment() {};
  Assignment(int x) { a = x; }

  void operator=(Assignment);
  void display() { cout << a << endl; }
};

void Assignment ::operator=(Assignment ob) { a = ob.a; }

int main() {
  Assignment o2(5), o1;
  o1 = o2;
  o1.display();
  o2.display();

  return 0;
}
