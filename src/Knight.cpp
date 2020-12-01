#include "Knight.h"

Knight::Knight(char color) : Chess_piece(color)
{
    //ctor
}

int Knight::get_val(){
    return 3;
}

std::string Knight::get_repr(){
    return "N"+m_color;
}

Knight::~Knight()
{
    //dtor
}
