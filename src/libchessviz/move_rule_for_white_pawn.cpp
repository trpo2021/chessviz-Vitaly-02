#include "move_rule_for_white_pawn.h"
#include "is_black_or_white.h"

bool move_rule_for_white_pawn(
        char** board,
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{
    const int S = 8;
    //first move
    if (y_start == S - 2 && y_end < y_start) {
        if ((y_end == y_start - 1
             || y_end == y_start - 2)
            && x_start == x_end) {
            return true;
        }
        if (y_end == y_start - 1
            && x_start + 1 == x_end
            && board[y_end][x_end] != '_'
            && is_black_or_white(board[y_end][x_end]) != true
            && x_start + 1 < S) {
            return true;
        }
        if (y_end == y_start - 1
            && x_start - 1 == x_end
            && board[y_end][x_end] != '_'
            && is_black_or_white(board[y_end][x_end]) != true
            && x_start - 1 >= 0) {
            return true;
        }
    }
    //other moves
    if (y_end >= 0 && y_end < y_start) {
        if (y_end == y_start - 1
            && x_start == x_end) {
            return true;
        }
        if (y_end == y_start - 1
            && x_start + 1 == x_end
            && board[y_end][x_end] != '_'
            && is_black_or_white(board[y_end][x_end]) == false
            && x_start + 1 < S) {
            return true;
        }
        if (y_end == y_start - 1
            && x_start - 1 == x_end
            && board[y_end][x_end] != '_'
            && is_black_or_white(board[y_end][x_end]) == false
            && x_start - 1 >= 0) {
            return true;
        }
    }
    return false;
}
