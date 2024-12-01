#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que carregue um vetor e nove elementos 
num�ricos inteiros, calcule e mostre os n�meros primos 
e suas respectivas posi��es.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Um n�mero � primo quando ele � divisivel por ele mesmo,
	s� pode ser divisivel por 1 e por ele mesmo, se for divisivel
	por outro n�mero, ele n�o � um n�mero primo, exemplo o 4, ele
	� divisivel por 1, por 2 e por ele mesmo, entao n�o � um n�mero primo.
	1, 2, 3, 4, 5, 6, 7, 8, 9...
	*/
	
	int vet[9], i, j, cont;
	
	for(i = 0; i < 9; i++){
		printf("Insira um n�mero inteiro: \n");
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 9; i++){
		cont = 0;
		for(j = 1; j <= vet[i]; j++){
			if(vet[i] % j == 0){
				cont++;
			}
		}
		if(cont == 2){
			printf("%d � primo, posi��o: %d.\n", vet[i], i);
		}
	}
	
}
