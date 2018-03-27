#ifndef PLAYER_H
#define PLAYER_H
#include <cstdbool>
#include <string>

class Board;

class Player {
	bool staleMate;
	bool checkMate;
	const string color;
	Board* B;
	public:
	void setStalemate();
	void setCheckmate();
	bool isChecked(string kingPos);
	void setup_all();
	void move(string oldPos, string newPos, string permission) = 0;
	Player();
	~Player();
};
#endif
