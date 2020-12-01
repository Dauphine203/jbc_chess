#include "Bishop.h"

Bishop::Bishop(char color) : Chess_piece(color)
{
    //ctor
}

int Bishop::get_val(){
    return 3;
}

std::string Bishop::get_repr(){
    return "B"+m_color;
}

Bishop::~Bishop()
{
    //dtor
}
