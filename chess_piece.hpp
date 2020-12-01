#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <algorithm>
#include <array>

namespace chess
{
    using color = char;
    using position_type = pair<char, int>;

    template <class T>

    class chess_piece
    {
	public:
		chess_piece(const chess_piece&) = delete; 
    		virtual ~chess_piece();
		virtual bool can_move(const position_type& pos) const = 0;
       	 	color get_color() const;
        	void move(const position_type& pos);
        	const position_type& get_position() const;
	

    	private:

        	position_type m_position;
        	color m_color;

    };
}
#endif
