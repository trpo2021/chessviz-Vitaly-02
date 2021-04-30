#include <iostream>

#include "move_rule_for_bishop.h"

using namespace std;

bool move_rule_for_bishop(
        char** board,
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{

    // (y - a, x - a)
    if (y_start > y_end && x_start > x_end) {
        if (y_start - y_end == x_start - x_end) {
            // check another figure on the way
            for (int i = y_start - 1, j = x_start - 1;
                 i > y_end;
                 --i, --j) {
                if (board[i][j] != '_') {
                    cout << "i = " << i << "\nj = " << j << "\n";
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
    return false;
}
