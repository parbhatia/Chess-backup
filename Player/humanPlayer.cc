#include "humanPlayer.h"
#include "pos.h"

static void makeTheMove(Piece* moved, target, Board* b){
	const Pos mPos = moved->getPos();
	const Pos tPos = target->getPos();
	Move* m = new Move(mPos, tPos, target);
	b->getMoves()->emplace_back(m); //info about move is pushed to moved vec in board
	b->getPieces()[tPos.row][tPos.col] = moved; //target cell points to moved piece
	b->getPieces()[mPos.row][mPos.col] = NULL; //freeing old cell
}

static bool outOfRange(const Pos p) {
	if (p.row > 7 || p.col > 7) return true;
	else if (p.row < 0 || p.col < 0) return true;
return false;
}

HumanPlayer::void move(Pos oldPos, newPos, string prm){
	Piece* curPiece = B.getPieces[oldPos.row][oldPos.col];
	Piece* target = B.getPieces[newPos.row][newPos.col];//piece at newPos

	if (outOfRange(oldPos) || outOfRange(newPos)) { //out of the board
		std::cout << "INVALID" << std::endl;
	}
	else if (oldPos.col == newPos.col && oldPos.row == newPos.row) {//oldPos == newPos
		std::cout << "INVALID" << std::endl;
	}
	else if (curPiece == NULL) {//empty cell
		std::cout << "INVALID" << std::endl;
	}
	else if (curPiece->getColor() != color) { //not player's piece
	std::cout << "INVALID" << std::endl;
	}
	else if (target != NULL && target->color == color) {//player capturing its own piece
	std::cout << "INVALID" << std::endl;
	}
	else {
		if(IsLegal(newPos, B->getPieces())) {
			makeTheMove(curPiece, target, B);
			if (IsChecked() == true){
				B->undo();
				std::cout << "INVALID" << std::endl;
			}
			else {
				curPiece->setMoved(true);
			}
		}
		else { //last move attempt was illegal
			std::cout << "INVALID" << std::endl;
		}
	}
}

HumanPlayer::HumanPlayer(string color, Board* B, King* king): Player(color, B, king) {}

HumanPlayer::~HumanPlayer(){};
