#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3];
	int i, j, x, lin, col, achou;
	achou = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Insira o elemento da linha %d, coluna %d: \n", i, j);
			scanf("%d", &mat[i][j]);	
		}
	}
	
	printf("Insira a chave de busca: \n");
	scanf("%d", &x);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(mat[i][j] == x){
				//ENCONTRAMOS A CHAVE DE BUSCA
				achou = 1;
				lin = i;
				col = j;
				break;
			}
		}
		if(achou == 1){
			break;
		}
	}
	
	if(achou == 1){
		printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", x, i, j);
	} else {
		printf("Chave não encontrada.");
	}
}
