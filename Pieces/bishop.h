#include "piece.h"

class Bishop: public Piece {
	void moveIsLegal (string oldPos, string newPos);
	Bishop();
	~Bishop();
};
