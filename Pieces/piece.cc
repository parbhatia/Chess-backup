#include "piece.h"
#include <iostream>
using namespace std;

void Piece::setMoved(bool val) {
	hasMoved = val;
}

void Piece::updatePos(Pos newPos) {
	Pos.row = newPos.row;
	Pos.col = newPos.col;
}

Pos Piece::getPos() {
	return Pos;
}

bool Piece::canJump() {
	return false;
}

void Piece::setPassant(bool val) {}
	
Piece::Piece(Color c, Pos Pos, bool hasMoved = false, bool enPassant = false): color{c}, Pos{Pos}, 
	hasMoved{hasMoved}, enPassant{enPassant} {}
