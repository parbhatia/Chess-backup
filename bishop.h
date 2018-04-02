#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h"
#include "pos.h"

class Bishop: public Piece {
	bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) override;
	vector<pos> getPossibleMoves(vector <vector<Piece*>>* pieces) override;
	Bishop(Color c, Pos Pos, bool hasMoved, bool enPassant);
};

#endif
