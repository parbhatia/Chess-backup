#include <iostream>
#include <vector>
using namespace std;

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector <Piece*> pieces; //current pieces on board
	TextDisplay* td;
	public:
	void insert (string pos, piece) {
        //notify TextDisplay of insert
        td->insert(string pos, piece);
    }
	void remove (string pos) {
        //notify TextDisplay of remove
        td->remove(string pos);
    }
	void pawn_checker(); //checks if any player's pawn are on the first or last row
	void setup_all(); //setups the entire board
	Board();
	~Board();
};


ostream operator<<(ostream &os, const Board &b) {
    (*td)>>out;
    return out;
}