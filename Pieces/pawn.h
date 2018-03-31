#include "piece.h"

class Pawn: public Piece {
	void setPassant(bool val) override;
	bool IsLegal(int newPosX, int newPosY) override;
	vector<vector<int>> possiblemoves() override;
	Pawn();
};
