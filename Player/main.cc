#include <iostream>
#include <string>
#include <sstream>
#include "textdisplay.h"
#include "piece.h"
#include "player.h"
#include "humanPlayer.h"
#include "computerPlayer.h"
#include "board.h"
#include "king.h"
#include "knight.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
using namespace std;

//ERROR CLASSES
class invalid_move {}; //for catching invalid move
//transfer to seperate error file

//STANDARD PIECE POSITIONS
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
//move to seperate file later

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
  string cmd;

  // SCOREBOARD //
  int wpoints = 0;
  int bpoints = 0;
  ////////////////

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
      ///////// GAME SETUP: RESETS EVERY GAME /////////
      Board b;
      Player *wplayer = NULL;
      Player *bplayer = NULL;
      Pos wking_pos = {0,0}; //will be updated by setup
      Pos bking_pos = {0,0}; //will be updated by setup
      bool already_setup = false;
      bool setup_conditions_met = false;
      color turn = white // white goes first by default
      /////////////////////////////////////////////////
      cin >> cmd;
      if (cin.eof() { //end program command
        cout << "Final Score:" <, endl;
        cout << "White: " << wpoints << endl;
        cout << "Black: " << bpoints << endl;
        return;
      }
      if (cmd == "setup") {
        already_setup = true;
        bool w_kingset = false;
        bool b_kingset = false;
        bool king_in_check = false;
        while(true) {
          cin >> cmd;
          if (cmd == "+") {
            char letter; // holds letter
            char col; //col pos
            int row; //row pos
            cin >> letter >> col >> row;
            Pos p = {8-row,colmap.at(col)};
            if (letter == "K") {
              if (w_kingset) {
                cout << "King already assigned." << endl;
              }
              else {
                b.insert(p,letter);
                w_kingset = true;
                //set white player king position
                wking_pos.row = p.row;
                wking_pos.col = p.col;
                //REDISPLAY BOARD
                b >> cout;
              }
            }
            else if (letter == "k") {
              if (b_kingset) {
                cout << "King already assigned." << endl;
              }
              else {
                b.insert(p,letter);
                b_kingset = true;
                //set black player king position
                bking_pos.row = p.row;
                bking_pos.row = p.col;
                //REDISPLAY BOARD
                b >> cout;
              }
            }
            else if (letter == "P") || letter == "p") {
              if (p.row != 0 && p.row != 7) { //checks if pawn is not in end rows
                b.insert(p,letter);
                //REDISPLAY BOARD
                b >> cout;
              }
              else {
                cout << "Invalid pawn placement." << endl;
              }
            }
            else {
              b.insert(p,letter);
              //REDISPLAY BOARD
              b >> cout;
            }
          }
          if (cmd == "=") {
            string c; //stores color
            cin >> c;
            if (c == "black") turn = Black;
          }
          if (cmd == "-") {
            char col;
            int row;
            cin >> col >> row;
            Pos p = {8-row,colmap.at(col)};
            if (b.getPieces()[p.row][p.col] != NULL) { //take action only if there is a piece at pos
              b.remove(p);
              if ()
              //REDISPLAY BOARD
              b >> cout;
            }
          }
          if (cmd == "done") {
            //Check setup conditions
            if (w.getking() == NULL){
              cout << "White king not set." << endl;
              w_kingset = false;
            }
            if (b.getking() == NULL) {
              cout << "Black king not set." << endl;
              b_kingset = false;
            }
            if (wplayer->isChecked() || bplayer->isChecked()) {
              king_in_check = true;
            }
            if (!king_in_check && w_kingset && b_kingset) setup_conditions_met = true;
            if (setup_conditions_met) {
              break;
            } 
            else {
              cout << "Setup conditions not met." << endl;
            }
          }
        }
        cout << "Setup complete." << endl;
        cout << "Please begin new game." << endl;
      }//end of setup
      if (cmd == "game") {
        //CREATE PLAYERS
        string w;
        string b;
        cin >> w >> b;
        //White player
        if (w == "human") { wplayer = Human(White, &b, NULL) };
        if (w == "computer1") {};
        if (w == "computer2") {};
        if (w == "computer3") {};
        if (w == "computer4") {};
        //Black player
        if (b == "human") { bplayer = Human(Black, &b, NULL) };
        if (b == "computer1") {};
        if (b == "computer2") {};
        if (b == "computer3") {};
        if (b == "computer4") {};
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
          //Players set their king pointer
          wplayer->setKing(b.getPieces()[7][4]);
          bplayer->setKing(b.getPieces()[0][4]);
        }
        else { //already setup is true
          //Players set their kings
          wplayer->setKing(b.getPieces()[][]);
          bplayer->setKing(b.getPieces()[][]);
        }
        while (!game_finished) {
          if (cin.eof()) { //if player decides to end program mid game
            end game;
            print scoreboard;
            return;
          }
          if (cmd == "resign") {
            game_finished = true; //will break from game on next iteraiton
            update points;
            cout << "Final Score:" <, endl;
            cout << "White: " << wpoints << endl;
            cout << "Black: " << bpoints << endl;
          }
          if (cmd == "move") {
            string s;
            getline(cin,s);
            char oldcol;
            int oldrow;
            char newcol;
            int newrow;
            char promotion = ' '; //need to assign promotion to ' '
            stringstream ss(s);
            ss >> oldcol >> oldrow >> newcol >> newrow >> promotion;
            Pos old_pos = {oldrow,oldcol};
            Pos new_pos = {newrow, newcol};
            //find out who's turn it is
            if (turn == White) {
              try{
                  wPlayer->move(old_pos, new_pos, promotion);
              }
              catch(invalid_move &o) {
                  cout << "Invalid move" << endl;
                  break;
              }
            }
            if (turn == Black) {
              try{
                  bPlayer->move(old_pos, new_pos, promotion);
              }
              catch(invalid_move &o) {
                  cout << "Invalid move" << endl;
                  break;
              }
            }

            ////// UPDATE TEXTDISPLAY //////
            b.updateTD(oldpos,newpos,promotion);
            ///// REDISPLAY TEXTDISPLAY ////
            b>>out;
            ///////// SWITCH TURNS /////////
            if (turn == White) turn = Black;
            if (turn == Black) turn = White;
            ////////////////////////////////

          }//end of move command
        }
        cout << "Please begin new game." << endl;
      }//end of game command
    }//end of one complete game, everything resets!
  }
  catch (...) {
    cout << "We're sorry we didn't catch this error. Pls give part marks" << endl;
  }
}