#include <iostream>
using namespace std;

int main() {
  int n = 5437;
  // logic
  // largest digit will be 9 and smallest digit will be 0
  // so choose default values like this
  int max = 0;
  int min = 9;
  int t = n;

  while (t > 0) {
    int r = t % 10;
    if (r > max) {
      max = r;
    }
    if (r < min) {
      min = r;
    }
    t = t / 10;
  }

  cout << "MAX: " << max << endl;
  cout << "MIN: " << min << endl;
  return 0;
}
