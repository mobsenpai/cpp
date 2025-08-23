#include <iostream>
using namespace std;

class FriendDemo {
  int width;
  friend void printWidth(FriendDemo a);

public: // needed for scope resolution to work
  void setWidth(int x);
};

void printWidth(FriendDemo a) { cout << "width" << a.width << endl; }

void FriendDemo::setWidth(int x) { width = x; }

int main() {
  FriendDemo o1;
  o1.setWidth(4);
  printWidth(o1); // didnt write o1.printWidth();
  return 0;
}
