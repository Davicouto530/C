#include <stdio.h>

int main() {
	int matriz[3][3] = {{1, 2, 3}, 
					   	{4, 5, 6}, 
					   	{7, 8, 9}};
	int i, j;
	
	printf("-----Imprimindo a primeira linha-----\n");
	for(j = 0; j < 3; j++){
		printf("%d ", matriz[0][j]);
	}
	
	printf("\n\n-----Imprimindo a matriz toda-----\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
