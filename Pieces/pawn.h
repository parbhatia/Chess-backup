#include "piece.h"

class Pawn: public Piece {
	void setPassant(bool val) override;
	bool IsLegal(pos newPos) override;
	vector<pos> possiblemoves() override;
	Pawn(Color c, pos Pos, bool hasMoved, bool enPassant);
};
