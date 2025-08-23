#include <iostream>
using namespace std;

class AddTime {
  int h, m, s;

public:
  AddTime() {}; // default constructor
  AddTime(int h, int m, int s) {
    this->h = h;
    this->m = m;
    this->s = s;
  }

  void display() { cout << h << ":" << m << ":" << s << endl; }

  AddTime operator+(AddTime);
};

AddTime AddTime::operator+(AddTime ob) {
  AddTime temp;
  int a, b, c;
  a = s + ob.s;            // total seconds
  temp.s = a % 60;         // seconds left
  b = m + ob.m + (a / 60); // total minutes
  temp.m = b % 60;         // minutes left
  c = h + ob.h + (b / 60); // total hours
  temp.h = c % 24;         // hours left

  return temp;
}

int main() {
  AddTime t1(2, 55, 58), t2(4, 50, 48), t3;
  t3 = t1 + t2;
  cout << "Time 1: ";
  t1.display();
  cout << "Time 2: ";
  t2.display();
  cout << "Time 1 + Time 2: ";
  t3.display();
  return 0;
}
