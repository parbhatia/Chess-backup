#include "piece.h"

class King: public Piece {
	void moveIsLegal(string oldPos, string newPos);
	bool canCastle() override;
	King();
	~King();
};
