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
  
    virtual ~chess_piece() {}
    
    chess_piece(const chess_piece&) {
      
    }
  
    const color get_color() const {
      return m_color;
    }
    
    const position_type& get_position() const {
      return m_position;
    }
    
    void move(const position_type& pos) {
      m_position = pos;
    }
  
  private:
    position_type m_position;
    color m_color;
  };

  class queen: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
  
  class king: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
  
  class bishop: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
  
  class knight: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
  
  class pawn: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
  
  class rook: public chess_piece
  {
  public:
    bool can_move(const position_type& pos) const override {
      return true;
    }
  };
}
