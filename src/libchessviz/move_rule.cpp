#include "is_black_or_white.h"
#include "move_rule_for_white_pawn.h"
#include "move_rule_for_black_pawn.h"
#include "move_rule_for_rook.h"
#include "move_rule_for_knight.h"
#include "move_rule_for_bishop.h"
#include "move_rule_for_queen.h"
#include "move_rule_for_king.h"

bool move_rule(
        int x_start,
        int y_start,
        int x_end,
        int y_end,
        char figure,
        char** board);

bool move_rule(
        int x_start,
        int y_start,
        int x_end,
        int y_end,
        char figure,
        char** board) 
{
	if (figure != '_') 
    {
		if (figure == 'p') {
            bool move_rules = move_rule_for_black_pawn(
                    board,
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rules == true) {
                return true;
            }
            return false;
        }
        
        if (figure == 'P') {
            bool move_rules = move_rule_for_white_pawn(
                    board,
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rules == true) {
                return true;
            }
            return false;
        }
        // ror rook
        if (figure == 'r' || figure == 'R') {
            bool move_rule = move_rule_for_rook(
                    board,
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rule == true) {
                return true;
            }
            return false;
        }
        // for knight
        if (figure == 'n' || figure == 'N') {
            bool move_rule = move_rule_for_knight(
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rule == true) {
                return true;
            }
            return false;
        }
        // for bishop
        if (figure == 'b' || figure == 'B') {
            bool move_rule = move_rule_for_bishop(
                    board,
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rule == true) {
                return true;
            }
            return false;
        }
        // queen
        if (figure == 'q' || figure == 'Q') {
            bool move_rule = move_rule_for_quenn(
                    board,
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rule == true) {
                return true;
            }
            return false;
        }
        // king
        if (figure == 'k' || figure == 'K') {
            bool move_rule = move_rule_for_king(
                    y_start,
                    x_start,
                    y_end,
                    x_end);
            if (move_rule == true) {
                return true;
            }
            return false;
        }
    }
    return false;
}
