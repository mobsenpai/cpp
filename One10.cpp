#include <iostream>
using namespace std;

int range;
class One10 {
  // to print 1 to 10 without using loop or recursive function
  static int count;

public:
  One10() { cout << count++ << endl; }
};

int One10::count = 1;

int main() {
  One10 ob[10];
  cout << "Enter range: ";
  cin >> range;
  One10 ob2[range];
}
