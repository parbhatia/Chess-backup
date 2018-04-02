#include "piece.h"

class Knight: public Piece {
	void moveIsLegal(string oldPos, string newPos);
	Knight();
	~Knight();
};
