#ifndef TEXT_DISPLAY
#define TEXT_DISPLAY

// class Cell;
// class Piece;

class TextDisplay {
	vector <Char*> pieces; //current pieces on board
	TextDisplay* td;
	public:
	void insert (string pos, piece);
	void remove (string pos);
	void pawn_checker(); //checks if any player's pawn are on the first or last row
	void setup_all(); //setups the entire board
	TextDisplay();
	~TextDisplay();
	
};
#endif


ostream operator<<(ostream &os, const TextDisplay &b) {
    //iterate through and print
}