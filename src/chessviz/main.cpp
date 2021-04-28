#include <iostream>
#include <libchessviz/show_board.h>
#include <libchessviz/new_board.h>

int main() 
{
    char** board = new_board();
    show_board(board);
    return 0;
}
