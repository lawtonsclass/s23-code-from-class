#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  // give back (i.e., return) the sum of x and y
  return x + y;
}

void printHello() {
  cout << "Hello!" << endl;
}

int main() {
  cout << add(4, 5) << endl;
  printHello();

  // cout << printHello() << endl;
  add(4, 5);

  return 0;
}
