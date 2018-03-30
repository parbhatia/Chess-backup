#include "piece.h"
#include <iostream>
#include <string>
using namespace std;

void Piece::setMoved() {
	hasMoved = true;
}

void Piece::updatePos(int newPosX, int newPosY) {
	posX = newPosX;
	posY = newPosY;
}

bool Piece::canJump() {
	return false;
}

void Piece::setPassant(bool val) {
	enPassant = val;
}
	
Piece::Piece(std::string c, int posx, int posy, bool hasMoved = false, bool enPassant = false): color{c}, posx{posX}, 
	posy{posY}, hasMoved{hasMoved}, enPassant{enPassant} {}

Piece::Piece~() {}


