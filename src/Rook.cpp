#include "Rook.h"

Rook::Rook(char color) : Chess_piece(color)
{
    //ctor
}

int Rook::get_val(){
    return 5;
}

std::string Rook::get_repr(){
    return "R"+m_color;
}

Rook::~Rook()
{
    //dtor
}
