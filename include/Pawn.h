#ifndef PAWN_H
#define PAWN_H

#include <Chess_piece.h>


class Pawn : public Chess_piece
{
    public:
        Pawn(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~Pawn();

    protected:

    private:
};

#endif // PAWN_H
