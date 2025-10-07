#include <iostream>
using namespace std;

class StringCounter {
  char str[50] = "This is an Example 03";
  int vowels = 0, consonants = 0, spaces = 0, digits = 0;

public:
  // in turboc
  // StringCounter(){
  //   cout<<"Enter a string: ";
  //   gets(str);
  // }

  bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      return true;
    } else {
      return false;
    }
  }

  bool isConsonant(char c) {
    if (!isVowel(c) && (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')) {
      return true;
    } else {
      return false;
    }
  }

  bool isSpace(char c) {
    if (c == ' ') {
      return true;
    } else {
      return false;
    }
  }

  bool isDigit(char c) {
    if (c >= '0' && c <= '9') {
      return true;
    } else {
      return false;
    }
  }

  void count() {
    for (int i = 0; str[i] != '\0'; i++) {
      if (isVowel(str[i])) {
        vowels++;
      } else if (isConsonant(str[i])) {
        consonants++;
      } else if (isSpace(str[i])) {
        spaces++;
      } else if (isDigit(str[i])) {
        digits++;
      }
    }
  }

  void print() {
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Digits: " << digits << endl;
  }
};

int main() {
  StringCounter ob1;
  ob1.count();
  ob1.print();

  return 0;
}
