#include <iostream>
using namespace std;

enum Power { low, medium, high };

int main() {
  // Power p = medium; // this only can have integers that are stored in Power
  // cout << p << endl;
  // int a = p - 1; // this way
  int a = 1; // and this way both work, // this can have any integer value, so
             // generally not prefered to use this way
  // essentially we are just keeping low = 0, medium = 1, high = 2 as not
  // integer but names
  // which is just medium = 1, so a = medium or a = 1 is same
  cout << a << endl;
  // cout << p;
  if (a == low) {
    cout << "the power is low";
  } else if (a == medium) {
    cout << "the power is medium";
  } else if (a == high) {
    cout << "the power is high";
  }

  return 0;
}
