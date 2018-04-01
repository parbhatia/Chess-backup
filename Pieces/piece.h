#include "pos.h"

class Piece {
	const Color color;
	Pos Pos;
	bool hasMoved;
	bool enPassant;
	public:
	void setMoved(bool val);
	void updatePos(Pos newPos);
	pos getPos();
	virtual bool canJump();
	virtual void setPassant(bool val);
	virtual bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) = 0;
	virtual vector<pos> getPossibleMoves(vector <vector<Piece*>>* pieces) = 0;
	virtual Piece(Color c, Pos Pos, bool hasMoved, bool enPassant);
	//No need a destructor since there is no heap allocated field and default dest is enough
};
