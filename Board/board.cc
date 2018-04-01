#include <iostream>
#include <vector>
using namespace std;

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector<vector < * Piece>> pieces(64); //current pieces on board
	TextDisplay* td;
	public:
	void insert (Pos pos, char letter) {
        int r = pos.row;
        int c = pos.col;
        if (letter == "R") { theBoard[8-r][c] = new Rook(White,pos); }
        else if (letter == "N") { theBoard[8-r][c] = new Knight(White,pos); }
        else if (letter == "B") { theBoard[8-r][c] = new Bishop(White,pos); }
        else if (letter == "Q") { theBoard[8-r][c] = new Queen(White,pos); }
        else if (letter == "K") { theBoard[8-r][c] = new King(White,pos); }
        else if (letter == "P") { theBoard[8-r][c] = new Pawn(White,pos); }
        else if (letter == "r") { theBoard[8-r][c] = new Rook(Black,pos); }
        else if (letter == "n") { theBoard[8-r][c] = new Knight(Black,pos); }
        else if (letter == "b") { theBoard[8-r][c] = new Bishop(Black,pos); }
        else if (letter == "q") { theBoard[8-r][c] = new Queen(Black,pos); }
        else if (letter == "k") { theBoard[8-r][c] = new King(Black,pos); }
        else { theBoard[8-r][c] = new Pawn(Black,pos); } //letter is "p"

        //notify TextDisplay of insert
        td->insert(pos,letter);
    }
	void remove (string pos) {
        //notify TextDisplay of remove
        td->remove(string pos);
    }
	void pawn_checker(); //checks if any player's pawn are on the first or last row
	void setup_all(); //setups the entire board
	Board() { //clear old board
    if (pieces.size() > 0) pieces.clear(); //clear old board
        for(int r=8, r>0. --r) {
            for (int c=A; c<=H, ++c) {
                theBoard[8-r][c] = NULL;
            }
        }
    }
	~Board();
};


ostream operator<<(ostream &os, const Board &b) {
    (*td)>>out;
    return out;
}
