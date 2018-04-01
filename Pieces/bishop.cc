#include "bishop.h"
#include <cmath>
using namespace std;

bool Bishop::IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) {  //Assuming newPos is either empty or enemy
  int arow = abs(newPos.row - Pos.row);
  int acol = abs(newPos.col - Pos.col);
  if (arow == acol) {
    if(Pos.row < newPos.row) {    
      if(Pos.col < newPos.col) {   //moving right-bottom
        for(int i = Pos.row + 1, int y = Pos.col + 1; (i < newPos.row) && (y < newPos.col); ++i, ++y) {
          if(pieces[i][y] != nullptr) {
            return false;
          }
        }
        return true;
      } else if(Pos.col > newPos.col) {   //moving left-bottom
        for(int i = Pos.row + 1, int y = Pos.col - 1; (i < newPos.row) && (y > newPos.col); ++i, --y) {
          if(pieces[i][y] != nullptr) {
            return false;
          }
        }
        return true;
      }
    } else if(Pos.row > newPos.row) {
      if(Pos.col < newPos.col) {   //moving right-top
        for(int i = Pos.row - 1, int y = Pos.col + 1; (i > newPos.row) && (y < newPos.col); --i, ++y) {
          if(pieces[i][y] != nullptr) {
            return false;
          }
        }
        return true;
      } else if(Pos.col > newPos.col) {   //moving left-top
        for(int i = Pos.row - 1, int y = Pos.col - 1; (i > newPos.row) && (y > newPos.col); --i, --y) {
          if(pieces[i][y] != nullptr) {
            return false;
          }
        }
        return true;
      }
    }
  } else {
    return false;
  }
}


vector<Pos> getPossibleMoves(vector <vector<Piece*>>* pieces) {  //We need to check destination cell if it's empty or enemy
  vector<Pos> vec = nullptr;
  
  for(int i = Pos.row + 1, int y = Pos.col + 1; (i <= 7) && (y <= 7); ++i, ++y) { //check right-bottom
    if(((pieces[i][y] == nullptr) || (pieces[i][y].color != color)) &&  //destionation cell condition
       (IsLegal({i, y}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,y};
    } else {
      break;
    }
  }
  
  for(int i = Pos.row + 1, int y = Pos.col - 1; (i <= 7) && (y >= 0); ++i, --y) { //check left-bottom
    if(((pieces[i][y] == nullptr) || (pieces[i][y].getColor != color)) &&  //destionation cell condition
       (IsLegal({i, y}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,y};
    } else {
      break;
    }
  }
  
  for(int i = Pos.row - 1, int y = Pos.col + 1; (i >= 0) && (y <= 7); --i, ++y) { //check right-top
    if(((pieces[i][y] == nullptr) || (pieces[i][y].getColor != color)) &&  //destionation cell condition
       (IsLegal({i, y}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,y};
    } else {
      break;
    }
  }
  
  for(int i = Pos.row - 1, int y = Pos.col - 1; (i >= 0) && (y >= 0); --i, --y) { //check left-top
    if(((pieces[i][y] == nullptr) || (pieces[i][y].getColor != color)) &&  //destionation cell condition
       (IsLegal({i, y}, vector <vector<Piece*>>* pieces) == true)) {
      vec.push_back = {i,y};
    } else {
      break;
    }
  }
  
  return vec;
}

Bishop::Bishop(Color c, Pos Pos, bool hasMoved = false, bool enPassant = false): Piece(c , Pos) {}
