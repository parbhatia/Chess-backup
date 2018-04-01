#include "player.h"
#include "pos.h"

bool Player::isChecked() {
	const Pos KingPos = king->getPos();
	for(auto &p:B->getPieces()) { //going through every piece on board
		if(p == NULL) continue; //skipping empty pieces
		if (color == p->getColor()) continue; //skipping player's pieces
		/*if enemy's piece && piece attacks king,
		  king is checked and we return true:*/
		else (p->IsLegal(KingPos, B->getPieces())){
			return true;
		}
	}

return false; //has checked all enemy pieces and none of them attacks player's king
}

bool Player::LegalMoveExists() {
	for (auto &p:B->getPieces) {
		//Checking for player's pieces, skipping empty cells:
		if (p != NULL && p.getColor == color) {
			vector <Pos> possibleMoves = p->getPossibleMoves();
			//checking if any of the possible moves are legal:
			for (auto &m:possibleMoves) {
				/*moving piece to the possible move
				  we're guaranteed piece is moved in legal direction*/
				makeTheMove(p, B->getPieces[m.row][m.col], B);
				if (!isChecked()) { //legal move exists
					//undo every move we made checking
					B.undo();
					return true;
				}
				//haven't found legal move yet
				B.undo();
			}

		}
	}
//found out no legal moves exists
return false;
}

void Player::setKing(King* K) {
	king = k;
}

void Player::getKing() {
	return king;
}

Player::Player(Color color, Board* B, King* king):
		color{color}, B{B}, king{king	} {}
