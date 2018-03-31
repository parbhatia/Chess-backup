#include "piece.h"
#include <iostream>
#include <string>
using namespace std;

void Piece::setMoved() {
	hasMoved = true;
}

void Piece::updatePos(pos newPos) {
	Pos.row = newPos.row;
	Pos.col = newPos.col;
}

pos Piece::getPos() {
	return Pos;
}

bool Piece::canJump() {
	return false;
}

void Piece::setPassant(bool val) {}
	
Piece::Piece(Color c, pos Pos, bool hasMoved = false, bool enPassant = false): color{c}, Pos{Pos}, 
	hasMoved{hasMoved}, enPassant{enPassant} {}
