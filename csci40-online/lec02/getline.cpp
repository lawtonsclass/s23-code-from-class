#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a line: ";
  string line;
  getline(cin, line);
  cout << "You typed: " << line << endl;

  return 0;
}
