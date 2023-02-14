#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  // give back (i.e., return) the sum of x and y
  return x + y; // gives back the answer to whoever called me
}

double add(double x, double y) {
  // give back (i.e., return) the sum of x and y
  return x + y; // gives back the answer to whoever called me
}

string add(string x, string y) {
  // give back (i.e., return) the sum of x and y
  return x + y; // gives back the answer to whoever called me
}

void printHello() {
  cout << "Hello!\n";
}

int main() {
  cout << add(4, 5) << endl; 
  cout << add(1, 7) << endl; 

  cout << add(3.14, 5.67) << endl; 

  string s1 = "hi ";
  string s2 = "mom!";
  cout << add(s1, s2) << endl;

  printHello();
  printHello();
  printHello();

  return 0;
}
