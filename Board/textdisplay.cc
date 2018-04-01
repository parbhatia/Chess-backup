#include "textdisplay.h"
#include <iostream>
#include <string>
using namespace std;

class TextDisplay {
    std::vector<std::vector<char>> theDisplay;
	public:
	void insert (Pos pos, char letter) { 
        int r = pos.row;
        int c = pos.col + 2; //must increment column pos by 2
        theDisplay[r][c] = letter;
    }
	void remove (Pos pos) { 
        int r = pos.row;
        int c = pos.col + 2; //must increment column pos by 2
        if ((r+c)%2 != 0) { //black tile
            theDisplay[row][column] = '_';
        } else {
            theDisplay[row][column] = ' ';
        }
    }
	TextDisplay() { // clears old board and sets up new 10x10 display
    
        //create empty display
        for(int i=0; i<10; ++i) { 
            vector<char> V;
            for (int j=0; j<10; ++j) {
                V.emplace_back(' ');
            }
            pieces.emplace_back(V);
        }
        //add column characters
        theDisplay[0][0] = '8';
        theDisplay[1][0] = '7';
        theDisplay[2][0] = '6';
        theDisplay[3][0] = '5';
        theDisplay[4][0] = '4';
        theDisplay[5][0] = '3';
        theDisplay[6][0] = '2';
        theDisplay[7][0] = '1';
        //add row characters
        theDisplay[9][2] = 'a';
        theDisplay[9][3] = 'b';
        theDisplay[9][4] = 'c';
        theDisplay[9][5] = 'd';
        theDisplay[9][6] = 'e';
        theDisplay[9][7] = 'f';
        theDisplay[9][8] = 'g';
        theDisplay[9][9] = 'h';
        //tile colours
        for(int i=0; i<8; ++i) {
            for(int j=2; j<10; ++j) {
                if ((i+j)%2 != 0) { //if black tiles
                    theDisplay[i][j] = '_';
                }
            }
        }
    }
};

ostream operator<<(ostream &os, const TextDisplay &b);

}