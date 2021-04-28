#include <iostream>

void show_board(char** board)
{
    const int S = 8;
    std::cout << "\t   a b c d e f g h\n";
    for (int i = 0; i < S; i++)
    {
        std::cout << "\n\t" << S - i << "  ";
        for (int j = 0; j < S; j++)
        {
            std::cout << board[i][j] << " ";
        }
    }
    std::cout << "\n\n##################################\n\n";
    return;
}
