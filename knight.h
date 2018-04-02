#ifndef KNIGHT_H
#define KNIGHT_H

#include <vector>
#include "piece.h"
#include "pos.h"
#include "color.h"

class Knight: public Piece {
	bool IsLegal(Pos newPos, vector <vector<*Piece>>* pieces) override;
	vector<pos> getPossibleMoves(vector <vector<*Piece>>* pieces) override;
	Knight(Color c, Pos Pos, bool hasMoved, bool enPassant);
};

#endif
