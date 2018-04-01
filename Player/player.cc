#include "player.h"
#include "pos.h"

bool Player::isChecked() {
	const Pos KingPos = king->getPos();
	for(auto &p:B->getPieces()) { //going through every piece on board
		if (color == p->getColor()) continue; //skip if player's piece
		/*if enemy's piece && piece attacks king,
		  king is checked and we return true:*/
		else (p->IsLegal(KingPos, B->getPieces())){
			return true;
		}
	}

return false; //has checked all enemy pieces and none of them attacks player's king
}

bool Player::LegalMoveExists() {
	for (auto &p:B->getPieces) { //each piece
		//make sure piece belongs to player:
		if (p.getColor == color) {
			//gets possible moves for the piece:
			vector <Pos> possibleMoves = p->getPossibleMoves();
			//if no possible move exist, move on (don't really need this) (deleted)
			/*iterating through each possible move, making the move,
			and checking if king's still in check*/
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

Player::Player(string color, Board* B, King* king):
		color{color}, B{B}, king{king	} {}
