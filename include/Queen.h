#ifndef QUEEN_H
#define QUEEN_H

#include <Chess_piece.h>


class Queen : public Chess_piece
{
    public:
        Queen(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~Queen();

    protected:

    private:
};

#endif // QUEEN_H
