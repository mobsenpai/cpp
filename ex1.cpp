#include <iostream>

class Person {
  char name[20];
  char address[30];

public:
  void input() {
    std::cout << "\nEnter name, address: ";
    std::cin >> name >> address;
  }
  void output() {
    std::cout << "\nNAME: " << name;
    std::cout << "\nADDRESS: " << address;
  }
} p;

class Emp {
  Person p;
  int id;
  int fees;
} e;

int main() {
  // e.p.input();
  p.input();
  p.output();
}
