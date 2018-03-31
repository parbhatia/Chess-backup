#include <iostream>
#include <vector>
using namespace std;

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector<vector <*Piece>> theBoard; //current pieces on board
	TextDisplay* td;
	public:
	void insert (struct pos, string letter) {
        if (letter == "K") {
            theBoard[8-r][c] = new King
        }
        //notify TextDisplay of insert
        td->insert(string pos, piece);
        push pieces in pieces;
    }
	void remove (string pos) {
        //notify TextDisplay of remove
        td->remove(string pos);
    }
	void pawn_checker(); //checks if any player's pawn are on the first or last row
	void setup_all(); //setups the entire board
	Board() {
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