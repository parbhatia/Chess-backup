#include "pos.h"

class Piece {
	const Color color;
	pos Pos;
	bool hasMoved;
	bool enPassant;
	public:
	void setMoved();
	void updatePos(pos newPos);
	pos getPos();
	virtual bool canJump();
	virtual void setPassant(bool val);
	virtual bool IsLegal(Pos newPos, vector < vector<Piece*> >* pieces) = 0;
	virtual vector<pos> possiblemoves() = 0;
	virtual Piece(Color c, pos Pos, bool hasMoved, bool enPassant);
	//No need a destructor since there is no heap allocated field and default dest is enough
};
