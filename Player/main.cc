#include <iostream>
#include <string>
using namespace std;

enum Color{Black, White};
enum Col{A,B,C,D,E,F,G,H};


convert_string 

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
            string letter; // holds letter
            string pos; //holds posiiton of move
            cin >> letter;
            cin >> pos;
            
            //add piece to Board pieces vector
            //call insert to board function
            //call setPiece functions;
            if (letter == "K") {
              Piece p;
              //set white player king to piece
              //give *King to wplayer to let him set his king
            }
            if (letter == "k") {
              //set black player king to piece
              //give *King to bplayer to let him set his king
            }
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
          if (cmd == "done") { done_setup = true; }
          if white king is not NULL { w_kingset = true; }
          if black king is not NULL { b_kingset = true; }
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