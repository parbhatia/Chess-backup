#include <string>

class Piece {
	const string color;
	int posX;
	int posY;
	bool canJump;
	bool hasMoved;
	bool enPassant;
	public:
	void setMoved(bool val);
	void updatePos(string newPos);
	virtual void setPassant(bool val);
	virtual bool canCastle();
	virtual bool IsLegal(int oldPosX, int oldPosY, int newPosX, int newPosY) = 0;
	virtual vector<vector<int>> possiblemoves() = 0;
	virtual Piece(string c, int posx, int posy, bool canJump, bool hasMoves = false, bool enPassant = false);
	virtual ~Piece();
};
