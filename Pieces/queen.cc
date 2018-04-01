#include "queen.h"
#include <cmath>
using namespace std;

bool Queen::IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) {  //Assuming newPos is either empty or enemy
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
  } else if(Pos.row == newPos.row) {    //moving horizontally
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
