#include <iostream>

using namespace std;

void show_board(char** board)
{
    const int S = 8;
    cout << "\t   a b c d e f g h\n";
    for (int i = 0; i < S; i++)
    {
        cout << "\n\t" << S - i << "  ";
        for (int j = 0; j < S; j++)
        {
            cout << board[i][j] << " ";
        }
    }
    cout << "\n\n##################################\n\n";
    return;
}

char** new_board()
{
    const int S = 8;
    char** board;
    board = new char* [S];
    for (int i = 0; i < S; i++) 
    {
        board[i] = new char[S];
    }
    //add figures on board
    board[0][0] = board[0][7] = 'r';
    board[0][1] = board[0][6] = 'n';
    board[0][2] = board[0][5] = 'b';
    board[0][3] = 'q'; 
    board[0][4] = 'k';
    for (int i = 1, j = 0; j < S; j++) 
    {
        board[i][j] = 'p';
    }
    for (int i = 2; i < S - 2; i++) 
    {
        for (int j = 0; j < S; j++) 
        {
            board[i][j] = '_';
        }
    }
    for (int i = 6, j = 0; j < S; j++) 
    {
        board[i][j] = 'P';
    }
    board[7][0] = board[7][7] = 'R';
    board[7][1] = board[7][6] = 'N';
    board[7][2] = board[7][5] = 'B';
    board[7][3] = 'Q';
    board[7][4] = 'K';
    return board;
}

int main() 
{
    char** board = new_board();
    show_board(board);
    return 0;
}
