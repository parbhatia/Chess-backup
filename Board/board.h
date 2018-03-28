#ifndef BOARD_H
#define BOARD_H
#include <vector>

class Cell;
class Piece;
class TextDisplay;

class Board {
	vector <Piece*> pieces; //current pieces on board
	TextDisplay* td;
	public:
	void insert (string pos, piece);
	void remove (string pos);
	Board();
	~Board();
	ostream operator<<(ostream &os, const Board &b);
};
#endif
