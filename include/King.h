#ifndef KING_H
#define KING_H

#include <Chess_piece.h>


class King : public Chess_piece
{
    public:
        King(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~King();

    protected:

    private:
};

#endif // KING_H
