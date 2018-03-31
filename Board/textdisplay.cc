#include "textdisplay.h"
#include <iostream>
#include <string>
using namespace std;

class TextDisplay {
    std::vector<std::vector<char>> theDisplay;
	public:
	void insert (int row, int col, piece);
	void remove (string pos);
	void setup_all() {} //if board calls this every time it adds a piece, dont need this


//uses 10 columns
//uses 10 rows
	TextDisplay() {
        for(int r=8, r>=-1. --r) {
            for (int c=-2; c<=H, ++c) {
                theDisplay[8-r][c];
            }
        }
    }
};

ostream operator<<(ostream &os, const TextDisplay &b);

}



/*

for(int r=8, r>0. --r) {
            for (int c=A; c<=H, ++c) {
                theDisplay[8-r][c]
            }
        }

*/