#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "player.h"

class HumanPlayer: public Player {
	public:
	void move(string oldPos, string newPos, string permission);
	HumanPlayer(string color, Board* B, King* king = NULL);
	~HumanPlayer();
};
#endif
