int queen(int r, int c)
{
	int i, j;
	
	//Checking row
	i = r;
	j = c;
	while(j >= 0){
		j--;
		if(G[i][j] != 0) return 0;
	}

	//Check diagonally downwards
	i = r;
	j = c;
	while(i >= 0 && j >= 0){
		i--;
		j--;
		if(G[i][j] != 0) return 0;
	}

	//Check diagonally upwards
	i = r;
	j = c;
	while(i < 8 && j >= 0){
		i++;
		j--;
		if(G[i][j] != 0) return 0;
	}

	//Since possible equate 1
	G[r][c] = 1;
	if(c == 7) return 1;

	if(queen(0, c+1)) return 1;
	if(queen(1, c+1)) return 1;
	if(queen(2, c+1)) return 1;
	if(queen(3, c+1)) return 1;
	if(queen(4, c+1)) return 1;
	if(queen(5, c+1)) return 1;
	if(queen(6, c+1)) return 1;
	if(queen(7, c+1)) return 1;
	
	//No solution found so backtrack
	G[r][c] = 0;
	return 0;
}
