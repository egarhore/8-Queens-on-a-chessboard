#include "headers.h"

int main(int argc, char * argv[])
{
	int i,j;
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			G[i][j] = 0;
		}
	}
	//G[0][0] = 1;

	if(queen(0, 0)) printf("Done!!!\n");
	else(printf("No solution\n"));

	/*for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%d ", G[i][j]);
		}
		printf("\n");
	}*/
	
	printf("\n\n");
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(G[i][j] == 0) printf("X  ");
			else printf("Q  ");
		}
		printf("\n");
	}
}
