#include "piece.h"

class Rook: public Piece {
	void moveIsLegal(string oldPos, string newPos);
	bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) override;
	vector<pos>* possiblemoves(vector <vector<Piece*>>* pieces) override;
	Rook(Color c, Pos Pos, bool hasMoved, bool enPassant);
};
