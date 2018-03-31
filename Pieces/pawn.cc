#include "pawn.h"
#include "pos.h"
using namespace std;

void Pawn::setPassant(bool val) {
  enPassant = val;
}

bool Pawn::IsLegal(pos newPos, vector<vector<Piece*>>* pieces) {
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

      
       
vector<pos>* Pawn::possiblemoves(vector<vector<Piece*>>* pieces) {
  vector<pos> vec = nullptr;  //ASK FUCKIN JAVID ABOUT THE POINTER RETURNING SHIT
  
  if(color == Black) {
    if(IsLegal({Pos.row + 1, Pos.col}, vector<vector<Piece*>>* pieces) == true) {  //1 forward
      vec.push_back = {Pos.row + 1, Pos.col};
    }
    if(IsLegal({Pos.row + 2, Pos.col}, vector<vector<Piece*>>* pieces) == true) {  //2 forward
      vec.push_back = {Pos.row + 2, Pos.col};
    }
    if((Pos.col >= 1) && (Pos.col <= 6)) {
      if(IsLegal({Pos.row + 1, Pos.col + 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col + 1};
      }
      if(IsLegal({Pos.row + 1, Pos.col - 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol left
        vec.push_back = {Pos.row + 1, Pos.col - 1};
      }
    } else if(Pos.col == 0) { // if the pawn is in the very left part of the board
      if(IsLegal({Pos.row + 1, Pos.col + 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col + 1};
      }
    } else { // if the pawn is in the very right part of the board
      if(IsLegal({Pos.row + 1, Pos.col - 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col - 1};
      }
    }
  } else if(color == White) {
    if(IsLegal({Pos.row - 1, Pos.col}, vector<vector<Piece*>>* pieces) == true) {  //1 forward
      vec.push_back = {Pos.row + 1, Pos.col};
    }
    if(IsLegal({Pos.row - 2, Pos.col}, vector<vector<Piece*>>* pieces) == true) {  //2 forward
      vec.push_back = {Pos.row + 2, Pos.col};
    }
    if((Pos.col >= 1) && (Pos.col <= 6)) {
      if(IsLegal({Pos.row + 1, Pos.col + 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col + 1};
      }
      if(IsLegal({Pos.row + 1, Pos.col - 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol left
        vec.push_back = {Pos.row + 1, Pos.col - 1};
      }
    } else if(Pos.col == 0) { // if the pawn is in the very left part of the board
      if(IsLegal({Pos.row + 1, Pos.col + 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col + 1};
      }
    } else { // if the pawn is in the very right part of the board
      if(IsLegal({Pos.row + 1, Pos.col - 1}, vector<vector<Piece*>>* pieces) == true) {  //1 diagnol right
        vec.push_back = {Pos.row + 1, Pos.col - 1};
      }
    }
  }
}

Pawn::Pawn(Color c, Pos Pos, bool hasMoved = false, bool enPassant = false): Piece(c , Pos) {}
