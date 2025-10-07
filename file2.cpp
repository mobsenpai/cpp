#include <iostream> // <iostream.h> in turboc++
// #include <conio.h> // in turboc++
// #include <stdio.h> // in turboc++
#include <fstream> // <fstream.h> in turboc++
using namespace std;

int main() { // void main in turboc++
  ofstream outfile("output.txt");
  char input[100]; // buffer to write lines
  char ch;         // character choice variable
  do {
    cout << "Enter input: ";
    cin.getline(input, 100);
    outfile << input << "\n";

    cout << "Press 'n' to stop, any other key to continue: ";
    // choice = getch(); // in turboc++
    // ch = getchar();
    // or
    cin >> ch;
    cout << ch << "\n";

  } while (ch != 'n');

  outfile.close();

  // read
  ifstream infile("output.txt");
  char line[100]; // buffer for reading lines
  cout << "File contents: \n";
  while (infile.getline(line, 100)) {
    cout << line << endl;
  }
  infile.close();

  return 0; // dont write in turboc++
}
