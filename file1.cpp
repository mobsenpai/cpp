#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char data[100];
  // open file in write mode
  ofstream outfile;
  outfile.open("afile.txt");
  outfile << "Hello, file handling in c++" << endl
          << "This is 2nd line" << endl;
  outfile.close();

  // open file in read mode
  ifstream infile;
  infile.open("afile.txt");
  cout << "Reading from the file ..." << endl;
  // reads first word
  // infile >> data;
  // use getline() to read full line
  infile.getline(data, 100);
  cout << data << endl;
  infile.close();

  return 0;
}
