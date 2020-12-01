#include "Chess_piece.h"

Chess_piece::Chess_piece(char color) : m_color(color)
{
    //ctor
}

Chess_piece::~Chess_piece()
{
    //dtor
}

Chess_piece::Chess_piece(const Chess_piece& other)
{
    //copy ctor
}

Chess_piece& Chess_piece::operator=(const Chess_piece& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
