#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"
#include "pos.h"

class Queen: public Piece {
	bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) override;
	vector<pos> getPossibleMoves(vector <vector<Piece*>>* pieces) override;
	Queen(Color c, Pos Pos, bool hasMoved, bool enPassant);
};

#endif
