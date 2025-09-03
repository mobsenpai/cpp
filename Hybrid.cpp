#include <iostream>
using namespace std;

class Stu {
  int id;
  char name[20];

public:
  void getStu() {
    cout << "Enter stud id, name";
    cin >> id >> name;
  }
};

class Marks : public Stu {
protected:
  int m, p, c;

public:
  void getMarks() {
    cout << "Enter 3 subject marks";
    cin >> m >> p >> c;
  }
};

class Sports {
protected:
  int spmarks;

public:
  void getSports() {
    cout << "Enter sports marks";
    cin >> spmarks;
  }
};

class Result : public Marks, public Sports {
  int tot;
  float avg;

public:
  void show() {
    tot = m + p + c;
    avg = tot / 3.0;
    cout << "Total = " << tot << endl;
    cout << "Average = " << avg << endl;
    cout << "Average + sports marks = " << avg + spmarks;
  }
};

int main() {
  Result r;
  r.getStu();
  r.getMarks();
  r.getSports();
  r.show();

  return 0;
}
