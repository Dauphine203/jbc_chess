#include "King.h"

King::King(char color) : Chess_piece(color)
{
    //ctor
}

int King::get_val(){
    return 9999999;
}

std::string King::get_repr(){
    return "K"+m_color;
}

King::~King()
{
    //dtor
}
