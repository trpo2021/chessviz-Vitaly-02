int get_coordinate(char symbol) 
{
	int temp1 = 7;
    int temp2 = 0;
    for (char temp = '1'; temp <= '8'; temp++, temp1--) {
        if (temp == symbol) {
            return temp1;
        }
    }
    for (char temp = 'a'; temp <= 'h'; temp++, temp2++) {
        if (temp == symbol) {
            return temp2;
        }
    }
	return -1;   
}
