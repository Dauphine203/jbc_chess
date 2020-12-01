#ifndef KNIGHT_H
#define KNIGHT_H

#include <Chess_piece.h>


class Knight : public Chess_piece
{
    public:
        Knight(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~Knight();

    protected:

    private:
};

#endif // KNIGHT_H
