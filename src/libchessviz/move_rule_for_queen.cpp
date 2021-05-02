#include "move_rule_for_queen.h"

bool move_rule_for_queen(
        char** board,
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{
    const int size = 8;
    // (y - a, x - a)
    if (y_start > y_end && x_start > x_end) {
        if (y_start - y_end == x_start - x_end) {
            // check another figure on the way
            for (int i = y_start - 1, j = x_start - 1;
                 i > y_end;
                 --i, --j) {
                if (board[i][j] != '_') {
                    return false;
                }
            }
            return true;
        }
    }
    // (y - a, x + a)
    if (y_start > y_end && x_start < x_end) {
        if (y_start - y_end == x_end - x_start) {
            // check another figure on the way
            for (int i = y_start - 1, j = x_start + 1;
                 i > y_end;
                 --i, ++j) {
                if (board[i][j] != '_') {
                    return false;
                }
            }
            return true;
        }
    }
    // (y + a, x + a)
    if (y_start < y_end && x_start < x_end) {
        if (y_end - y_start == x_end - x_start) {
            for (int i = y_start + 1, j = x_start + 1;
                 i < y_end;
                 ++i, ++j) {
                if (board[i][j] != '_') {
                    return false;
                }
            }
            return true;
        }
    }
    // (y + a, x - a)
    if (y_start < y_end && x_start > x_end) {
        if (y_end - y_start == x_start - x_end) {
            for (int i = y_start + 1, j = x_start - 1;
                 i < y_end;
                 ++i, --j) {
                if (board[i][j] != '_') {
                    return false;
                }
            }
            return true;
        }
    }
    // horizontal moves
    if (y_start == y_end
        && (x_end >= 0 && x_end < size)) {
        // check another figure on the way
        // right move
        if (x_start < x_end) {
            for (int i = x_start + 1; i < x_end; ++i) {
                if (board[y_start][i] != '_') {
                    return false;
                }
            }
        }
        // left move
        if (x_start > x_end) {
            for (int i = x_start - 1; i > x_end; --i) {
                if (board[y_start][i] != '_') {
                    return false;
                }
            }
        }
        // all checks failed - true
        return true;
    }

    // vertical moves
    if (x_start == x_end
        && (y_end >= 0 && y_end < size)) {
        // check another figure on the way
        // up move
        if (y_start > y_end) {
            for (int i = y_start - 1; i > y_end; --i) {
                if (board[i][x_start] != '_') {
                    return false;
                }
            }
        }
        // down move
        if (y_start < y_end) {
            for (int i = y_start + 1; i < y_end; ++i) {
                if (board[i][x_start] != '_') {
                    return false;
                }
            }
        }
        // all checks failed - true
        return true;
    }
    return false;
}
