#include "piece.h"
#include <iostream>
#include <string>
using namespace std;

class Piece {
	const string color;
	int posX;
	int posY;
	bool enPassant;
	bool hasMoved;
	bool canJump;
	public:
	void setMoved(bool val);
	void setPassant(bool val);
	void updatePos(string newPos);
	virtual bool canCastle();
	virtual bool moveIsLegal(string oldPos, string newPos) = 0;
	virtual Piece();
	virtual ~Piece() {}
};



