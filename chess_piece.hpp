#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <utility>

namespace chess
{
  using color = char;
  using position_type = std::pair<char, int>;
  
  class chess_piece
  {
  public:
    virtual ~chess_piece();
    
    chess_piece(const chess_piece&) = delete;
    
    virtual bool can_move(const position_type& pos) const = 0;
    
    const color get_color() const;
    const position_type& get_position() const;
    
    void move(const position_type& pos);
    
  private:
    position_type m_position;
    color m_color;
  };
  
  class queen: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
  
  class king: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
  
  class bishop: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
  
  class knight: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
  
  class pawn: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
  
  class rook: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override;
  };
}

#endif
