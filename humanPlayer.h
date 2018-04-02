#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "player.h"

class HumanPlayer: public Player {
	public:
	void move(Pos oldPos, Pos newPos, string permission) override;
	HumanPlayer(Color color, Board* B, King* king = NULL);
	~HumanPlayer();
};
#endif
