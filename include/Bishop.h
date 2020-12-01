#ifndef BISHOP_H
#define BISHOP_H

#include <Chess_piece.h>


class Bishop : public Chess_piece
{
    public:
        Bishop(char color);
        std::string get_repr() override;
        int get_val() override;
        virtual ~Bishop();

    protected:

    private:
};

#endif // BISHOP_H
