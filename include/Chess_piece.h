#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
#include <string>

class Chess_piece
{
    public:
        Chess_piece(char color);
        virtual std::string get_repr() = 0;
        virtual int get_val() = 0;
        virtual ~Chess_piece();
        Chess_piece(const Chess_piece& other);
        Chess_piece& operator=(const Chess_piece& other);

    protected:
        char m_color;

    private:
};

#endif // CHESS_PIECE_H
