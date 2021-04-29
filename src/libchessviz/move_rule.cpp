#include "move_rule.h"
#include "is_black_or_white.h"
#include "move_rule_for_white_pawn.h"
#include "move_rule_for_black_pawn.h"

using namespace std;

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
    }
    return false;
}
