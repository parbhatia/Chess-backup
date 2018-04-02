#ifndef TEXT_DISPLAY
#define TEXT_DISPLAY
class Piece;

class TextDisplay {
    std::vector<std::vector<char>> theDisplay;
	public:
	void insert (string pos, piece);
	void remove (string pos);
	//void setup_all(); //if board calls this every time it adds a piece, dont need this
	TextDisplay();
};

ostream operator<<(ostream &os, const TextDisplay &b);

#endif