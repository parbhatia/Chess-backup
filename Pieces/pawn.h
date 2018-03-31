#include "piece.h"

class Pawn: public Piece {
	void setPassant(bool val) override;
	bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) override;
	vector<pos>* possiblemoves(vector <vector<Piece*>>* pieces) override;
	Pawn(Color c, Pos Pos, bool hasMoved, bool enPassant);
};
