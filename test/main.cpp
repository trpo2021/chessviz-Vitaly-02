#define CTEST_MAIN

#include <string>

#include "libchessviz/check_input.h"
#include "libchessviz/is_black_or_white.h"
#include "libchessviz/get_coordinate.h"
#include "libchessviz/move.h"
#include "libchessviz/move_rule.h"
#include "libchessviz/game_loop.h"
#include "libchessviz/new_board.h"
#include "libchessviz/is_turn_right.h"
#include "libchessviz/console_input.h"
#include "libchessviz/show_board.h"
#include "libchessviz/move_rule_for_black_pawn.h"
#include "libchessviz/move_rule_for_white_pawn.h"
#include "libchessviz/move_rule_for_bishop.h"
#include "libchessviz/move_rule_for_king.h"
#include "libchessviz/move_rule_for_knight.h"
#include "libchessviz/move_rule_for_queen.h"
#include "libchessviz/move_rule_for_rook.h"
#include "ctest.h"

using namespace std;

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

// check_input

CTEST(check_input, test1)
{
    // Given
    string enter = "e2-e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_TRUE(result);
}

CTEST(check_input, test2)
{
    // Given
    string enter = "e2 e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test3)
{
    // Given
    string enter = "e21e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test4)
{
    // Given
    string enter = "e2ue3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test5)
{
    // Given
    string enter = "e2+e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test6)
{
    // Given
    string enter = "z2-e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test7)
{
    // Given
    string enter = "e2-x3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test8)
{
    // Given
    string enter = "l2-m3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test9)
{
    // Given
    string enter = "e0-e3";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test10)
{
    // Given
    string enter = "e2-e9";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test11)
{
    // Given
    string enter = "e9-e0";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test12)
{
    // Given
    string enter = "werty";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

CTEST(check_input, test13)
{
    // Given
    string enter = "12345";
    const bool result = check_input(enter);

    // Then
    ASSERT_FALSE(result);
}

// is_black_or_white

CTEST(is_black_or_white, test1)
{
    // Given
    const char figure = 'p';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test2)
{
    // Given
    const char figure = 'r';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test3)
{
    // Given
    const char figure = 'n';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test4)
{
    // Given
    const char figure = 'b';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test5)
{
    // Given
    const char figure = 'k';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test6)
{
    // Given
    const char figure = 'q';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_FALSE(result);
}

CTEST(is_black_or_white, test7)
{
    // Given
    const char figure = 'P';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

CTEST(is_black_or_white, test8)
{
    // Given
    const char figure = 'R';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

CTEST(is_black_or_white, test9)
{
    // Given
    const char figure = 'N';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

CTEST(is_black_or_white, test10)
{
    // Given
    const char figure = 'B';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

CTEST(is_black_or_white, test11)
{
    // Given
    const char figure = 'K';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

CTEST(is_black_or_white, test12)
{
    // Given
    const char figure = 'Q';
    const bool result = is_black_or_white(figure);

    // Then
    ASSERT_TRUE(result);
}

// move

CTEST_SKIP(move, test_skip)
{
    ASSERT_FAIL();
}

// move_rule

CTEST_SKIP(move_rule, test_skip)
{
    ASSERT_FAIL();
}

// game_loop

CTEST_SKIP(game_loop, test_skip)
{
    ASSERT_FAIL();
}

// new_board

CTEST_SKIP(new_board, test_skip)
{
    ASSERT_FAIL();
}

// is_turn_right

CTEST_SKIP(is_turn_right, test_skip)
{
    ASSERT_FAIL();
}

// console_input

CTEST_SKIP(console_input, test_skip)
{
    ASSERT_FAIL();
}

// show_board

CTEST_SKIP(show_board, test_skip)
{
    ASSERT_FAIL();
}

// get_coordinate

CTEST(get_coordinate, test1)
{
    // Given
    const char a = 'a';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 0;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test2)
{
    // Given
    const char a = 'b';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 1;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test3)
{
    // Given
    const char a = 'c';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 2;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test4)
{
    // Given
    const char a = 'd';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 3;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test5)
{
    // Given
    const char a = 'e';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 4;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test6)
{
    // Given
    const char a = 'f';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 5;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test7)
{
    // Given
    const char a = 'g';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 6;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test8)
{
    // Given
    const char a = 'h';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 7;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test9)
{
    // Given
    const char a = '1';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 7;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test10)
{
    // Given
    const char a = '2';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 6;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test11)
{
    // Given
    const char a = '3';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 5;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test12)
{
    // Given
    const char a = '4';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 4;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test13)
{
    // Given
    const char a = '5';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 3;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test14)
{
    // Given
    const char a = '6';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 2;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test15)
{
    // Given
    const char a = '7';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 1;

    // Test
    ASSERT_EQUAL(expected, b);
}

CTEST(get_coordinate, test16)
{
    // Given
    const char a = '8';

    // When
    const int b = get_coordinate(a);

    // Then
    const int expected = 0;

    // Test
    ASSERT_EQUAL(expected, b);
}

// move_rule_for_black_pawn

CTEST(move_rule_for_black_pawn, test1)
{
    // Given
    const int x_figure = 1;
    const int y_figure = 1;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'p';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_black_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_black_pawn, test2)
{
    // Given
    const int x_figure = 2;
    const int y_figure = 2;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'p';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_black_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_black_pawn, test3)
{
    // Given
    const int x_figure = 2;
    const int y_figure = 2;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'p';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_black_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST(move_rule_for_black_pawn, test4)
{
    // Given
    const int x_figure = 2;
    const int y_figure = 2;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)
                || (i == y_move && j == x_move)) {
                board[i][j] = 'p';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_black_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

// move_rule_for_white_pawn

CTEST(move_rule_for_white_pawn, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_white_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_white_pawn, test2)
{
    // Given
    const int x_figure = 6;
    const int y_figure = 6;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 6;
    const int y_move = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_white_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_white_pawn, test3)
{
    // Given
    const int x_figure = 6;
    const int y_figure = 6;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 6;
    const int y_move = 6;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_white_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST(move_rule_for_white_pawn, test4)
{
    // Given
    const int x_figure = 6;
    const int y_figure = 6;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 65;
    const int y_move = 65;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_white_pawn(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

// move_rule_for_bishop

CTEST(move_rule_for_bishop, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == y_figure && j == x_figure) {
                board[i][j] = 'b';
            } else
                board[i][j] = '_';
        }
    }
    const int x_move = 4;
    const int y_move = 4;

    bool flag = move_rule_for_bishop(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_bishop, test2)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == y_figure && j == x_figure) {
                board[i][j] = 'b';
            } else
                board[i][j] = '_';
        }
    }
    const int x_move = 2;
    const int y_move = 4;

    bool flag = move_rule_for_bishop(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_bishop, test3)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == y_figure && j == x_figure) {
                board[i][j] = 'b';
            } else
                board[i][j] = '_';
        }
    }
    const int x_move = 2;
    const int y_move = 2;

    bool flag = move_rule_for_bishop(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_bishop, test4)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == y_figure && j == x_figure) {
                board[i][j] = 'b';
            } else
                board[i][j] = '_';
        }
    }
    const int x_move = 4;
    const int y_move = 2;

    bool flag = move_rule_for_bishop(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

// king

CTEST(move_rule_for_king, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test2)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test3)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test4)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 4;
    const int y_move = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test5)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 4;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test6)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test7)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 99;
    const int y_move = 99;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)
                || (i == y_move && j == x_move)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST(move_rule_for_king, test8)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)
                || (i == y_move && j == x_move)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST(move_rule_for_king, test9)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 4;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_king, test10)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'k';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_king(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

// knight 

CTEST(move_rule_for_knight, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test2)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 4;
    const int y_move = 5;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test3)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test4)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test5)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 2;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test6)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 4;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test7)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_knight, test8)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 59;
    const int y_move = 29;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST(move_rule_for_knight, test9)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'n';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_knight(
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

// queen

CTEST(move_rule_for_queen, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 5;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test2)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test3)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 5;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test4)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test5)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test6)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 5;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test7)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 5;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_queen, test8)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'q';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_queen(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

// rook

CTEST(move_rule_for_rook, test1)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 6;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_rook(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_rook, test2)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 1;
    const int y_move = 3;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_rook(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_rook, test3)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_rook(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_rook, test4)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 3;
    const int y_move = 6;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_rook(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_TRUE(flag);
}

CTEST(move_rule_for_rook, test5)
{
    // Given
    const int x_figure = 3;
    const int y_figure = 3;
    const int size = 8;
    char** board;
    board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }
    const int x_move = 39;
    const int y_move = 69;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i == y_figure && j == x_figure)) {
                board[i][j] = 'r';
            } else
                board[i][j] = '_';
        }
    }

    bool flag = move_rule_for_rook(
            board,
            y_figure,
            x_figure,
            y_move,
            x_move);
    ASSERT_FALSE(flag);
}

CTEST_SKIP(ctest, test_skip)
{
    ASSERT_FAIL();
}
