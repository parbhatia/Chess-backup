#include "piece.h"

class Queen: public Piece {
	void moveIsLegal(string oldPos, string newPos);
	Queen();
	~Queen();
};
