#include "move_rule_for_knight.h"

bool move_rule_for_knight(
        int y_start,
        int x_start,
        int y_end,
        int x_end)
{
    // first (y + 1, x - 2)
    if (y_start + 1 == y_end
        && x_start - 2 == x_end) {
        return true;
    }
    // second (y + 2, x - 1)
    if (y_start + 2 == y_end
        && x_start - 1 == x_end) {
        return true;
    }
    // third (y + 2, x + 1)
    if (y_start + 2 == y_end
        && x_start + 1 == x_end) {
        return true;
    }
    // fourth (y + 1, x + 2)
    if (y_start + 1 == y_end
        && x_start + 2 == x_end) {
        return true;
    }
    // fifth (y - 1, x - 2)
    if (y_start - 1 == y_end
        && x_start - 2 == x_end) {
        return true;
    }
    // sixth (y - 2, x - 1)
    if (y_start - 2 == y_end
        && x_start - 1 == x_end) {
        return true;
    }
    // seventh (y - 2, x + 1)
    if (y_start - 2 == y_end
        && x_start + 1 == x_end) {
        return true;
    }
    // eight (y - 1, x + 2)
    if (y_start - 1 == y_end
        && x_start + 2 == x_end) {
        return true;
    }
    return false;
}
