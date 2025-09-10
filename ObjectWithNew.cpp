#include <iostream>
using namespace std;

class ObjectWithNew {};

// i inherited to make proper class name and not use the 'objectwithnew' name
class Box : public ObjectWithNew {
public:
  Box() { cout << "Constructor called"; }
  ~Box() { cout << "Destructor called"; }
};

int main() {
  // Key points -
  // new keyword needs to use pointer
  Box *arr1 = new Box[4];
  delete[] arr1;
}
