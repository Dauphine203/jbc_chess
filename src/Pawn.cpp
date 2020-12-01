#include "Pawn.h"

Pawn::Pawn(char color): Chess_piece(color){

}

int Pawn::get_val(){
    return 1;
}

std::string Pawn::get_repr(){
    return "P"+m_color;
}

Pawn::~Pawn()
{}
