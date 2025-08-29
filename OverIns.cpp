#include <iostream>
using namespace std;

class OverIns {
  int a, b;

public:
  OverIns() {} // default constructor
  OverIns operator<<() {
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
  }
};
