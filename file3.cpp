#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char ch, input[100], line[100];

  // write
  ofstream outfile;
  outfile.open("output.txt");
  do {
    cout << "Enter line to add:\n";
    cin.getline(input, 100);
    outfile << input << "\n";
    cout << "Press 'n' to stop, any other key to continue: ";
    cin >> ch;
    if (ch == 'n') {
      cout << "Stopping writing...\n";
    }

  } while (ch != 'n');
  outfile.close();

  // read
  ifstream infile;
  infile.open("output.txt");
  cout << "Thank you for using this program. Following are the lines entered\n";
  while (infile.getline(line, 100)) {
    cout << line << endl;
  }
  infile.close();

  return 0;
}
