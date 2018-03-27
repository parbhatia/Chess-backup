#include "piece.h"

class Rook: public Piece {
	void moveIsLegal(string oldPos, string newPos);
	bool canCastle() override;
	Rook();
	~Rook();
};
