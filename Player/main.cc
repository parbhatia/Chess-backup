#include <iostream>
#include <string>
using namespace std;

int main() {
  // Command Interpreter
  string s;
  cin >> s;
  while (cin << s) {
    if (s == "move") {
      return 0;
    }
    if (s == "resign") {
      return 0;
    }
  }
}