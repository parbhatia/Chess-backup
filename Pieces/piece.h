#include <string>

class Piece {
	const std::string color;
	int posX;
	int posY;
	bool hasMoved;
	bool enPassant;
	public:
	void setMoved();
	void updatePos(int newPosX, int newPosY);
	virtual bool canJump();
	virtual void setPassant(bool val);
	virtual bool IsLegal(int oldPosX, int oldPosY, int newPosX, int newPosY) = 0;
	virtual vector<vector<int>> possiblemoves() = 0;
	virtual Piece(std::string c, int posx, int posy, bool hasMoved, bool enPassant);
	virtual ~Piece();
};
