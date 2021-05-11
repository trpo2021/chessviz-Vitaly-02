#include <iostream>
#include "is_black_or_white.h"
#include "is_turn_right.h"

bool is_turn_right(char** board, int x_start, int y_start, int x_end, int y_end, bool b_or_w_turn)
{
    if (b_or_w_turn != is_black_or_white(board[y_start][x_start])) {
        std::cout << "\nError: It's not turn for this color!\n\n";
        return false;
    }
    
    if (board[y_end][x_end]!='_') {
    	bool figure_color = is_black_or_white(board[y_start][x_start]);
    	bool next_color = is_black_or_white(board[y_end][x_end]);
    	if (figure_color == next_color) {
    		std::cout << "\nError: You cant beat your own figures!\n\n";
    		return false;
    	}
    }
    
    
    return true;
}
