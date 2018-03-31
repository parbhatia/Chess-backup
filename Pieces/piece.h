#include <string>

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
	virtual bool IsLegal(pos newPos) = 0;
	virtual vector<pos> possiblemoves() = 0;
	virtual Piece(Color c, pos Pos, bool hasMoved, bool enPassant);
	virtual ~Piece();
};
