#include "pawn.h"

void Pawn::setPassant(bool val) {
  enPassant = val;
}

bool Pawn::isLegal(int oldPosX, int oldPosY, int newPosX, int newPosY) {} //IMPLEMENT LATER


vector<vector<int>> Piece::possiblemoves() {
  vector<vector<int>> vec = nullptr;
