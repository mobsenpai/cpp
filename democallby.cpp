#include <iostream>
using namespace std;

void callByValue(int x) { x = 10; }

void callByReference(int &x) { x = 10; }

int main() {
  int a = 2;
  cout << "initial value of a : " << a << endl;
  callByValue(a);
  cout << "after call by value: " << a << endl;
  callByReference(a);
  cout << "after call by reference: " << a << endl;

  return 0;
}
