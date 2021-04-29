#include <string>
using namespace std;

bool check_input(string in) 
{
	bool check = true;
	//check character
	for(int j = 0; j <= 3; j+=3) 
	{
		bool temp = false;
		for(char i = 'a'; i <= 'h'; i++) 
		{
			if(in[j] == i)
				temp = true;
		}
		check = check && temp;
	}
	//check digits
	for(int j = 1; j <= 4; j+=3)
	{
		bool temp = false;
		for(char i = '1'; i <= '8'; i++) 
		{
			if(in[j] == i)
				temp = true;
		}
		check = check && temp;
	}
	//check -
	if(in[2]!='-')
		check = false;
	return check;
}
