#include <iostream>
using namespace std;

class IncrementBy2 {
  int a;

public:
  IncrementBy2() {};
  IncrementBy2(int x) { a = x; }
  void display() { cout << a << endl; }

  void operator++();
  void operator++(int);
};

void IncrementBy2 ::operator++() { a = a + 2; }    // prefix
void IncrementBy2 ::operator++(int) { a = a + 2; } // postfix

int main() {
  IncrementBy2 o1(4);
  o1++; // prefix
  o1.display();
  ++o1; // postfix
  o1.display();

  return 0;
}
