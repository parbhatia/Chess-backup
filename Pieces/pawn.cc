#include "pawn.h"

void Pawn::setPassant(bool val) {
  enPassant = val;
}

bool Pawn::isLegal(int newPosX, int newPosY) {} //IMPLEMENT LATER


vector<vector<int>> Piece::possiblemoves() {
  vector<vector<int>> vec = nullptr;
  
  if(color == Black) {
    if(hasMoved == false) {   //2 forward move
      vector<int> v1 = nullptr;
      v1.push_back(posY + 2);
      v1.push_back(posX);
      vec.push_back(v1);
    }
    vector<int> v2 = nullptr;
    v2.push_back(
    } else if(color == White) {
        
        
        
        if(((newPosY >= 0) && (newPosY <= 7)) &&
       (((posY == newPosY) && (posX == (newPosX - 1))) ||    // 1 forward move
        ((hasMoved == false) && (posY == newPosY) && (posX == (newPosX - 2))) ||   // 2 forward move
        (((posY == newPosY - 1) || (posY == newPosY + 1)) && (posX == (newPosX - 1))))) {   //1 diagnol move
      return true;
    } else {
      return false;
    }
