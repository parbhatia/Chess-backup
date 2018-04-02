#ifndef BOARD_H
#define BOARD_H
#include <string>
#include "pos.h"
#include "color.h"

class Cell;
class Piece;
class TextDisplay;

class Board {
	std::vector <Piece*> pieces; //current pieces on board
	TextDisplay* td;
	public:
	void insert (Pos pos, char letter);
	void remove (Pos pos);
	void updateTD(Pos oldpos, Pos newpos, char promo);
	std::vector<std::vector<Piece*>> * getPieces();
	Board();
	~Board();
	friend ostream &operator<<(ostream &os, const Board &b);
};
#endif
