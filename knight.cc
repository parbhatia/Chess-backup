#include "knight.h"
using namespace std;

bool Queen::IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) {  //Assuming newPos is either empty or enemy
