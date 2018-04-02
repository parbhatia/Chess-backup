#ifndef PIECE_H
#define PIECE_H

#include "pos.h"

class Piece {
	const Color color;
	Pos Pos;
	bool hasMoved;
	bool enPassant;
	public:
	void setMoved(bool val);
	Color getColor();
	void updatePos(Pos newPos);
	Pos getPos();
	virtual bool getPassant();
	virtual void setPassant(bool val);
	virtual bool IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) = 0;
	virtual vector<Pos> getPossibleMoves(vector <vector<Piece*>>* pieces) = 0;
	virtual Piece(Color c, Pos Pos, bool hasMoved, bool enPassant);
	virtual friend ostream& operator<<(ostreeam& out, const Piece& p);
	//No need a destructor since there is no heap allocated field and default dest is enough
};

#endif
