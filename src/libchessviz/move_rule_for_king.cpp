#include "move_rule_for_king.h"

bool move_rule_for_king(
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{
    // (y + 1, x + 1)
    if (y_start + 1 == y_end
        && x_start + 1 == x_end) {
        return true;
    }
    // (y - 1, x - 1)
    if (y_start - 1 == y_end
        && x_start - 1 == x_end) {
        return true;
    }
    // (y, x + 1)
    if (y_start == y_end && x_start + 1 == x_end) {
        return true;
    }
    // (y, x - 1)
    if (y_start == y_end && x_start - 1 == x_end) {
        return true;
    }
    // (y + 1, x)
    if (y_start + 1 == y_end && x_start == x_end) {
        return true;
    }
    // (y - 1, x)
    if (y_start - 1 == y_end && x_start == x_end) {
        return true;
    }
    // (y - 1, x + 1)
    if (y_start - 1 == y_end
        && x_start + 1 == x_end) {
        return true;
    }
    // (y + 1, x - 1)
    if (y_start + 1 == y_end
        && x_start - 1 == x_end) {
        return true;
    }
    return false;
}
