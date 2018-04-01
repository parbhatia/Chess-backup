#ifndef PLAYER_H
#define PLAYER_H
#include "piece.h"
#include "board.h"

class Player {
	const Color color;
	Board* B;
	King* king;
	public:
	bool LegalMoveExists();
	void setKing(King* K);
	King* getKing();
	virtual void move(const Pos curPos, const Pos newPos, string prm) = 0;
	Player(Color color, Board* B, King* king = NULL);
	~Player();
};

bool isChecked(King* k, vector<Pieces*>* pieces);

#endif
