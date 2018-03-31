#include "pawn.h"
#include "pos.h"
using namespace std;

void Pawn::setPassant(bool val) {
  enPassant = val;
}

bool Pawn::IsLegal(pos newPos, vector <vector<Piece*>>* pieces) {
  if(color == Black) {
    if(((Pos.col == newPos.col) && (Pos.row == (newPos.row - 1)) && (pieces[newPos.row][newPos.col] == nullptr)) ||  //1 forward
       ((hasMoved == false) && (Pos.col == newPos.col) && (Pos.row == (newPos.row - 2)) &&   //2 forward 
        (pieces[newPos.row][newPos.col] == nullptr) && (pieces[newPos.row - 1][newPos.col] == nullptr)) ||
       (((Pos.col == (newPos.col + 1)) || (Pos.col == (newPos.col - 1))) && (Pos.row == (newPos.row - 1)) &&   //1 diagnol
        (pieces[newPos.row][newPos.col] != nullptr) && (pieces[newPos.row][newPos.col].color == White))) {
      return true;
    } else {
      return false;
    }
  } else if (color == White) {
    if(((Pos.col == newPos.col) && (Pos.row == (newPos.row + 1)) && (pieces[newPos.row][newPos.col] == nullptr)) ||  //1 forward
       ((hasMoved == false) && (Pos.col == newPos.col) && (Pos.row == (newPos.row + 2)) &&   //2 forward 
        (pieces[newPos.row][newPos.col] == nullptr) && (pieces[newPos.row + 1][newPos.col] == nullptr)) ||
       (((Pos.col == (newPos.col + 1)) || (Pos.col == (newPos.col - 1))) && (Pos.row == (newPos.row + 1)) &&   //1 diagnol
        (pieces[newPos.row][newPos.col] != nullptr) && (pieces[newPos.row][newPos.col].color == Black))) {
      return true;
    } else {
      return false;
    }
  }
}

      
       
vector<pos>* Pawn::possiblemoves() {
  vector<pos> vec = nullptr;
  
  if(color == Black) {
    if(hasMoved == false) {   //2 forward move
      
      vec.push_back(v1);
    }
    vector<int> v2 = nullptr;   //1 forward move
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
