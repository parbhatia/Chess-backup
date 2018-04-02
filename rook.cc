#include "rook.h"
using namespace std;

bool Rook::IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) {  //Assuming newPos is either empty or enemy
  if(Pos.row == newPos.row) {    //moving horizontally
    if(Pos.col < newPos.col) {   //to right
      for(int i = Pos.col + 1; i < newPos.col; ++i) {
        if(pieces[Pos.row][i] != nullptr) {
          return false;
        }
      }
      return true;
    } else if(Pos.col > newPos.col) {  //to left
      for(int i = Pos.col - 1; i > newPos.col; --i) {
        if(pieces[Pos.row][i] != nullptr) {
          return false;
        }
      }
      return true;
    }
  } else if(Pos.col == newPos.col) { //moving vertically
    if(Pos.row < newPos.row) {   //to down
      for(int i = Pos.row + 1; i < newPos.row; ++i) {
        if(pieces[i][Pos.col] != nullptr) {
          return false;
        }
      }
      return true;
    } else if(Pos.row > newPos.row) {   //to up
      for(int i = Pos.row - 1; i > newPos.row; --i) {
        if(pieces[i][Pos.col] != nullptr) {
          return false;
        }
      }
      return true;
    }
  } else {
    return false;
  }
}

vector<Pos> Rook::getPossibleMoves(vector <vector<Piece*>>* pieces) {  //We need to check destination cell if it's empty or enemy
  vector<Pos> vec = nullptr;
  
  for(int i = Pos.col + 1; i <= 7; ++i) { //check right
    if(((pieces[Pos.row][i] == nullptr) || (pieces[Pos.row][i].getColor() != color)) &&  //destionation cell condition
       (IsLegal({Pos.row, i}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,Pos.col};
    } else {
      break;
    }
  }
  
  for(int i = Pos.col - 1; i >= 0; --i) { //check left
    if(((pieces[Pos.row][i] == nullptr) || (pieces[Pos.row][i].getColor() != color)) &&  //destionation cell condition
       (IsLegal({Pos.row, i}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,Pos.col};
    } else {
      break;
    }
  }
  
  for(int i = Pos.row + 1; i <= 7; ++i) { //check bottom
    if(((pieces[i][Pos.col] == nullptr) || (pieces[i][Pos.col].getColor() != color)) &&  //destionation cell condition
       (IsLegal({i, Pos.col}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i, Pos.col};
    } else {
      break;
    }
  }
  
  for(int i = Pos.row - 1; i >= 0; --i) { //check top
    if(((pieces[i][Pos.col] == nullptr) || (pieces[i][Pos.col].getColor() != color)) &&  //destionation cell condition
       (IsLegal({i, Pos.col}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i, Pos.col};
    } else {
      break;
    }
  }
  
  return vec;
}

Rook::Rook(Color c, Pos Pos, bool hasMoved = false, bool enPassant = false): Piece(c , Pos) {}
