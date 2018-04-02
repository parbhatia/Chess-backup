#include "board.h"
#include <iostream>
#include <string>
#include <vector>
#include "pos.h"
using namespace std;

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector<vector<*Piece>> pieces; //all pieces on board
	TextDisplay* td = NULL;
	public:
	void insert (Pos pos, char letter) {
        int r = pos.row;
        int c = pos.col;
        if (letter == "R") { pieces[r][c] = new Rook(White,pos); }
        else if (letter == "N") { pieces[r][c] = new Knight(White,pos); }
        else if (letter == "B") { pieces[r][c] = new Bishop(White,pos); }
        else if (letter == "Q") { pieces[r][c] = new Queen(White,pos); }
        else if (letter == "K") { pieces[r][c] = new King(White,pos); }
        else if (letter == "P") { pieces[r][c] = new Pawn(White,pos); }
        else if (letter == "r") { pieces[r][c] = new Rook(Black,pos); }
        else if (letter == "n") { pieces[r][c] = new Knight(Black,pos); }
        else if (letter == "b") { pieces[r][c] = new Bishop(Black,pos); }
        else if (letter == "q") { pieces[r][c] = new Queen(Black,pos); }
        else if (letter == "k") { pieces[r][c] = new King(Black,pos); }
        else { pieces[r][c] = new Pawn(Black,pos); } //letter is "p"
        //notify TextDisplay of insert
        td->insert(pos,letter);
    }
	void remove (Pos pos) {
        pieces[r][c] = NULL;
        //notify TextDisplay of remove
        td->remove(Pos pos);
    }
    vector<vector<Piece*>> * getPieces() { return &pieces; }
	Board() { //sets up new 8x8 board
        td = new TextDisplay();
        for(int i=0; i<8; ++i) { 
            vector<*Pieces> P;
            for (int j=0; j<8; ++j) {
                P.emplace_back(NULL);
            }
            pieces.emplace_back(P);
        }
    }

    void updateTD(Pos oldpos, Pos newpos, char promo) {
        td->move(oldpos,newpos,promotion);
    }

    bool ischeck(Pos kpos, Pos 

	~Board();
};

friend ostream &operator<<(ostream &os, const Board &b) {
    (*td)>>out;
    return out;
}
