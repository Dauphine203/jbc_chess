#include "Queen.h"

Queen::Queen(char color) : Chess_piece(color)
{
    //ctor
}

int Queen::get_val(){
    return 10;
}

std::string Queen::get_repr(){
    return "Q"+m_color;
}

Queen::~Queen()
{
    //dtor
}
