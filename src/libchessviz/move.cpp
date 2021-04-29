#include <iostream>
#include "move.h"
#include "move_rule.h"

using namespace std;

void move(
        char** board,
        int x_start,
        int y_start,
        int x_end,
        int y_end,
        bool& is_moved)
{
    bool flag = move_rule(
            x_start,
            y_start,
            x_end,
            y_end,
            board[y_start][x_start],
            board);
    if (flag == true) {
        char temp = board[y_start][x_start];
        board[y_start][x_start] = '_';
        board[y_end][x_end] = temp;
        is_moved = true;
        return;
    } else {
        return;
    }
    cout << "\nError: move failed!\n";
    return;
}
