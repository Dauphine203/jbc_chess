#ifndef ROOK_H
#define ROOK_H

#include <Chess_piece.h>


class Rook : public Chess_piece
{
    public:
        Rook(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~Rook();

    protected:

    private:
};

#endif // ROOK_H
