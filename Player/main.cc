#include <iostream>
#include <string>
using namespace std;

int main() {
  // Command Interpreter
  string cmd;
  Board b;
  Player *wplayer = NULL;
  Player *bplayer = NULL;
  bool already_setup = false;
  bool setup_conditions_met = false;
  Color turn = white // white goes first by default
  try {
    while (true) {
      cin << cmd;
      if (cmd == "setup") {
        already_setup = true;
        bool done_setup = false;
        bool w_kingset = false;
        bool b_kingset = false;
        while(!done_setup && !setup_conditions_met) {
          if (done_setup) {
            cout << "Setup conditions not met." << endl;
          }
          cin >> cmd;
          if (cmd == "+") {
            string p; // holds letter
            string pos; //holds posiiton of move
            cin >> p;
            cin >> pos;
            Piece p;
            //call setPiece functions;
          }
          if (cmd == "=") {
            string c; //stores color
            cin >> c;
            if (c == "black") turn = Black;
          }
          if (cmd == "-") {
            string p; //
            cin >> p;
          }
          if (cmd == "done") {
            done_setup = true;
          }
          //check if player1 king is null;
          //check if player2  king is null;
          //set player king if K command is given
          //give *King to player to let him set his king
        }
      }
      if (cmd == "game") {
        if (!already_setup) {
          //call setup all
        }
        //assign to player1
        //assign to player2

      if (cmd == "resign");
      if (cmd == "move");
    }



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