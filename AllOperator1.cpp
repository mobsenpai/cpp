// Overload operators to add a data member of two

#include <iostream>
using namespace std;

class AllOperator1 {
  float a;

public:
  AllOperator1() {}
  AllOperator1(bool) {
    cout << "Enter a number: ";
    cin >> a;
  }

  float display() { return a; }

  AllOperator1 operator+(AllOperator1);
  AllOperator1 operator-(AllOperator1);
  AllOperator1 operator*(AllOperator1);
  AllOperator1 operator/(AllOperator1);
};

// int AllOperator1::operator+(AllOperator1 ob) { return a + ob.a; } // 1st type

AllOperator1
AllOperator1::operator+(AllOperator1 ob) { // 2nd type, preferred more
  AllOperator1 temp;
  temp.a = a + ob.a;
  return temp;
}

AllOperator1 AllOperator1::operator-(AllOperator1 ob) {
  AllOperator1 temp;
  temp.a = a - ob.a;
  return temp;
}

AllOperator1 AllOperator1 ::operator*(AllOperator1 ob) {
  AllOperator1 temp;
  temp.a = a * ob.a;
  return temp;
}

AllOperator1 AllOperator1 ::operator/(AllOperator1 ob) {
  AllOperator1 temp;
  temp.a = a / ob.a;
  return temp;
}

int main() {
  AllOperator1 o1(true), o2(true), o3;
  // i made boolean just to run constructor for the objects that have
  // it, as o3 will have the added value of a in o1 and o2

  o3 = o1 + o2;
  // behind the scenes it is happening
  // o1.+(o2)
  // + is a function, takes o2 as argument and o1 is the invoker
  cout << "Addition: " << o3.display() << endl;
  o3 = o1 - o2;
  cout << "Subtraction: " << o3.display() << endl;
  o3 = o1 * o2;
  cout << "Multiplication: " << o3.display() << endl;
  o3 = o1 / o2;
  cout << "Division: " << o3.display() << endl;

  return 0;
}
