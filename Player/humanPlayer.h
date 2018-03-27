#include "player.h"

class HumanPlayer: public Player {
	public:
	void move(string oldPos, string newPos, string permission);
	//might not need ctor/dtor
	HumanPlayer();
	~HumanPlayer();
};
