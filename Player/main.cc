#include <iostream>
#include <string>
#include <sstream>
using namespace std;


//add more error classes here, then transfer them to seperate error file
//throw objects of these types whenever you see fit
//remember to throw by value, catch by reference
// - par

class invalid_move {}; //for catching bad input


enum Color{Black, White};
enum Col{
  a=0,
  b=1,
  c=2,
  d=3,
  e=4,
  f=5,
  g=6,
  h=7,
};

int main() {
  // Command Interpreter
  string cmd;
  Board b;
  Player *wplayer = NULL;
  Player *bplayer = NULL;
  int wpoints = 0;
  int bpoints = 0;
  bool already_setup = false;
  bool setup_conditions_met = false;
  Color turn = white // white goes first by default

  //creating map of Col to make parsing col easier
  std::map<char, Col> colmap;
  colmap['a'] = Col::a;
  colmap['b'] = Col::b;
  colmap['c'] = Col::c;
  colmap['d'] = Col::d;
  colmap['e'] = Col::e;
  colmap['f'] = Col::f;
  colmap['g'] = Col::g;
  colmap['h'] = Col::h;

  try {
    while (true) {
      if (cin.eof() { 
        end game;
        print scoreboard;
        return;
      }
      cin >> cmd;
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
            char col; //col pos
            char row; //row pos
            cin >> letter >> col >> row;
            insert (row, colmap.at(col), letter);
            if (letter == "K") {
              //set white player king to piece
              //give *King to wplayer to let him set his king
            }
            if (letter == "k") {
              //set black player king to piece
              //give *King to bplayer to let him set his king
            }
            //REDISPLAY BOARD
          }
          if (cmd == "=") {
            string c; //stores color
            cin >> c;
            if (c == "black") turn = Black;
          }
          if (cmd == "-") {
            string p; //
            cin >> p;
            REMOVE PIECE
            //REDISPLAY BOARD
          }
          if (cmd == "done") { done_setup = true; }
          if white king is not NULL { w_kingset = true; }
          if black king is not NULL { b_kingset = true; }
        }
      }
      if (cmd == "game") {
        if (!already_setup) {
          //insert all pieces  by calling b.insert()
          b.insert()


            // no need to assign pieces to players
        }
        while (!game_finished) {
          if (cin.eof()) { //if player decides to end program mid game
            end game;
            print scoreboard;
            return;
          }
          if (cmd == "resign") {
            game_finished = true;
            update points;
          }
          if (cmd == "move") {
            string s;
            getline(cin,s);
            string pos1;
            string pos2;
            string promotion;
            stringstream ss(s);
            ss >> pos1 >> pos2 >> promotion;

            //find out who's turn it is,
            if (promotion != "") { //handle pawn promotion
                try{
                  moving;
                  notify textdisplay!
                }
                catch(invalid_move &o) {
                  cout << "Invalid move" << endl;
                }
            }
            if (turn == White) {
              wPlayer->move()
              //call move on player
              try{
                  moving;
                  notify textdisplay!
                }
                catch(invalid_move &o) {
                  cout << "Invalid move" << endl;
                }
          }
    }
    }
  }
  catch (...) {
    
  }
}