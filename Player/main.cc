#include <iostream>
#include <string>
using namespace std;






int main() {
  // Command Interpreter
  string cmd;
  Board b;
  bool already_setup = false; //prevents players from multiple setups
  Color turn; // determines who goes next
  try {
    while (true) {
      cin << cmd;
      if (cmd == "setup") {

        //check if player1 king is null;
        //check if player2  king is null;
        //set player king if K command is given
        if (!already_setup) {
          already_setup = true;
        }
      }
      if (cmd == "game") {}
      if (cmd == "resign");
      if (cmd == "move");
    }



  }
  catch (...) {
    
  }
}



// int main(int argc, char *argv[]) {
//   cin.exceptions(ios::eofbit|ios::failbit);
//   string cmd;
//   Grid g;

//   // Add code here

//   try {
//   while (true) {
//     cin >> cmd;
//     if (cmd == "new") {
//       int n;
//       cin >> n;
//       // Add code here
//       g.gridsize
//     }
//     else if (cmd == "play") {
//       int r = 0, c = 0;
//       cin >> r >> c;
//       // Add code here
//     }
//   }
//   }
//   catch (ios::failure &) {}  // Any I/O failure quits
// }