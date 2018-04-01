#include "board.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector<vector<*Piece>> pieces; //all pieces on board
	TextDisplay* td;
	public:
	void insert (Pos pos, char letter) {
        int r = pos.row;
        int c = pos.col;
        if (letter == "R") { pieces[8-r][c] = new Rook(White,pos); }
        else if (letter == "N") { pieces[8-r][c] = new Knight(White,pos); }
        else if (letter == "B") { pieces[8-r][c] = new Bishop(White,pos); }
        else if (letter == "Q") { pieces[8-r][c] = new Queen(White,pos); }
        else if (letter == "K") { pieces[8-r][c] = new King(White,pos); }
        else if (letter == "P") { pieces[8-r][c] = new Pawn(White,pos); }
        else if (letter == "r") { pieces[8-r][c] = new Rook(Black,pos); }
        else if (letter == "n") { pieces[8-r][c] = new Knight(Black,pos); }
        else if (letter == "b") { pieces[8-r][c] = new Bishop(Black,pos); }
        else if (letter == "q") { pieces[8-r][c] = new Queen(Black,pos); }
        else if (letter == "k") { pieces[8-r][c] = new King(Black,pos); }
        else { pieces[8-r][c] = new Pawn(Black,pos); } //letter is "p"
        //notify TextDisplay of insert
        td->insert(pos,letter);
    }
	void remove (string pos) {
        //notify TextDisplay of remove
        td->remove(string pos);
    }

    vector<vector<*Piece>> * getPieces() { return &pieces; }


	Board() { //clears old board and sets up new 8x8 board
        if (pieces.size() > 0) pieces.clear(); //clear old board
        for(int i=0; i<8; ++i) { 
            vector<*Pieces> P;
            for (int j=0; j<8; ++j) {
                P.emplace_back(NULL);
            }
            pieces.emplace_back(P);
        }
    }
	~Board();
};


friend stream &operator<<(ostream &os, const Board &b) {
    (*td)>>out;
    return out;
}
