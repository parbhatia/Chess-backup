#include "bishop.h"
using namespace std;

bool Bishop::IsLegal(Pos newPos, vector <vector<Piece*>>* pieces) {  //Assuming newPos is either empty or enemy
