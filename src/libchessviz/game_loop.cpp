#include <iostream>
#include <string>
#include "get_coordinate.h"
#include "new_board.h"
#include "game_loop.h"
#include "is_turn_right.h"
#include "move.h"
#include "show_board.h"
#include "check_input.h"
#include "console_input.h"

using namespace std;

void game_loop()
{
    char** board = new_board();
    cout << "The game starts! Enter your move.\n"
    		"Example:a2-a4 \n"
    		"Or press q to exit game";
            cout << "\n\n##################################\n\n";
    show_board(board);
    int count = 1;
    while (1) 
    {
        bool black_or_white;  
        if (count % 2 == 1) {
            black_or_white = true;  //white t
        } else {
            black_or_white = false; //black t
        }
        bool is_moved = false; 
        string enter;
        int x_start, y_start, x_end, y_end;
        if (black_or_white == true) {
            cout << "White turn, enter your move: ";
        } else {
            cout << "Black turn, enter your move: ";
        }
        cin >> enter;
        console_input(enter, x_start, y_start, x_end, y_end);
            if (is_turn_right(board, x_start, y_start, x_end, y_end, black_or_white)
                == true && board[y_start][x_start] != '_' ) {
                move(board,
                     x_start,
                     y_start,
                     x_end,
                     y_end,
                     is_moved);
                show_board(board);
                if (is_moved == true) {
                    ++count;
                }
            }
    }
    for (int i = 0; i < 8; ++i) {
        delete[] board[i];
    }
    delete[] board;
    return;
}
