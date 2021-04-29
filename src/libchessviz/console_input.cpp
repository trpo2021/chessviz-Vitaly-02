#include <iostream>
#include "get_coordinate.h"
#include "check_input.h"

using namespace std;

void console_input(string move, int& x_start, int& y_start, int& x_end, int& y_end) 
{
	//string move;
	//cin >> move;
	//cout << move << endl;
	if(move == "q")
		exit(1);
	if(check_input(move)==false)
	{
		cout << "\nError: Wrong input!\n";
		return;
	}
	x_start = get_coordinate(move[0]);
	y_start = get_coordinate(move[1]);
	x_end = get_coordinate(move[3]);
	y_end = get_coordinate(move[4]);
}
