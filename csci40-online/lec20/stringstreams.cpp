#include <iostream>
#include <sstream>
using namespace std;

int main() {
  stringstream ss;  
  ss << 100; // "100"
  ss << endl; // "100\n"
  ss << 200; // "100\n200"

  int x;
  ss >> x;
  cout << x << endl;

  cout << endl;

  cout << ss.str() << endl;

  return 0;
}
