bool move_rule_for_rook(
        char** board,
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{
    const int size = 8;
    // horizontal moves
    if (y_start == y_end
        && (x_end >= 0 && x_end < size)) {
        // check there is another figure on the path
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
        // if all checks didnt complete - return true
        return true;
    }

    // vertical moves
    if (x_start == x_end
        && (y_end >= 0 && y_end < size)) {
        // check there is another figure on the path
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
        // if all checks didnt complete - return true
        return true;
    }
    return false;
}
