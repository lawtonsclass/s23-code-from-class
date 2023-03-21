#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(const string& s) {
  if (s == "snow") {
    return "nieve";
  } else if (s == "mountain") {
    return "山";
  } else if (s == "tonight") {
    return "απόψε";
  } else {
    return s;
  }
}

int main() {
  ifstream ifs("LetItGoLyrics.txt");

  string word;
  while (ifs >> word) {
    cout << translate(word);

    // preserve all the whitespace after this word
    // while the next char is whitespace
    while (isspace(ifs.peek())) {
      // eat it up
      char nextChar = ifs.get();
      // output that whitespace char
      cout << nextChar;
    }
  }

  ifs.close();

  return 0;
}
