#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream ifs("sample-file.txt");
  string s;
  ifs >> s;
  ifs >> s;
  ifs >> s;
  ifs >> s;

  cout << ifs.eof() << endl;

  ifs >> s; // notices the end of the ifle, and the read fails!

  cout << ifs.eof() << endl;
  cout << s << endl;

  return 0;
}
