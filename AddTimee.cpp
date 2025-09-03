#include <iostream>
using namespace std;

class AddTimee {
  int h, m, s;

public:
  AddTimee() {
    h = 0;
    m = 0;
    s = 0;
    // formatTime(); //calling here won't work, as constructors are called only
    // when object is created.
  }

  AddTimee(int h, int m, int s) {
    this->h = h;
    this->m = m;
    this->s = s;
  }
  void showTime() { cout << h << ":" << m << ":" << s << endl; }
  void formatTime() {
    int ns = 0, nm = 0, nh = 0; // new s,m,h
    ns = s % 60;
    nm = (s / 60 + m) % 60;
    nh = ((s / 60 + m) / 60 + h) % 24;

    s = ns;
    m = nm;
    h = nh;
  }

  AddTimee operator+(AddTimee ob);
};

AddTimee AddTimee::operator+(AddTimee ob) {
  AddTimee t;
  t.h = h + ob.h;
  t.m = m + ob.m;
  t.s = s + ob.s;
  t.formatTime();
  return t;
}

int main() {
  AddTimee t1(11, 23, 44), t2(2, 20, 32), t3;
  t3 = t1 + t2;
  t3.showTime();
}
