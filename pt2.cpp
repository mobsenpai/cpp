#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      if (i == 5) {
        cout << "*";
      } else if (i == 1) {
        cout << "*";
        break;
      } else if (i == 2) {
        cout << "*";
      } else if (i == 3 || i == 4) {
        if (j == 1 || j == i) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }

  return 0;
}
