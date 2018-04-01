#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//error classes
//throwing by value, catching by reference ;)
class invalid_move {}; //for catching bad input
//transfer to seperate error file

//piece positions for a standard game of chess
//move to seperate file later
Pos N1={7,1}
Pos B1={7,2};
Pos Q={7,3};
Pos K={7,4};
Pos B2={7,5};
Pos N2={7,6}
Pos R2={7,7};
Pos P1={6,0};
Pos P2={6,1}
Pos P3={6,2};
Pos P4={6,3};
Pos P5={6,4};
Pos P6={6,5};
Pos P7={6,6}
Pos P8={6,7};

Pos r1={0,0};
Pos n1={0,1}
Pos b1={0,2};
Pos q={0,3};
Pos k={0,4};
Pos b2={0,5};
Pos n2={0,6}
Pos r2={0,7};
Pos p1={1,0};
Pos p2={1,1}
Pos p3={1,2};
Pos p4={1,3};
Pos p5={1,4};
Pos p6={1,5};
Pos p7={1,6}
Pos p8={1,7};


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

  //creating map of column commands to make parsing column positions easier
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
          //inserting white player pieces
          b.insert(R1,'R');
          b.insert(N1,'N');
          b.insert(B1,'B');
          b.insert(Q,'Q');
          b.insert(K,'K');
          b.insert(B2,'B');
          b.insert(N2,'N');
          b.insert(R2,'R');
          b.insert(P1,'P');
          b.insert(P2,'P');
          b.insert(P3,'P');
          b.insert(P4,'P');
          b.insert(P5,'P');
          b.insert(P6,'P');
          b.insert(P7,'P');
          b.insert(P8,'P');

          //inserting black player pieces
          b.insert(r1,'r');
          b.insert(n1,'n');
          b.insert(b1,'b');
          b.insert(q,'q');
          b.insert(k,'k');
          b.insert(b2,'b');
          b.insert(n2,'n');
          b.insert(r2,'r');
          b.insert(p1,'p');
          b.insert(p2,'p');
          b.insert(p3,'p');
          b.insert(p4,'p');
          b.insert(p5,'p');
          b.insert(p6,'p');
          b.insert(p7,'p');
          b.insert(p8,'p');

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