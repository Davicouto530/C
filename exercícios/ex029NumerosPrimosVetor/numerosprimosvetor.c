#include <stdio.h>
#include <locale.h>

/* Faça um programa que carregue um vetor e nove elementos 
numéricos inteiros, calcule e mostre os números primos 
e suas respectivas posições.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Um número é primo quando ele é divisivel por ele mesmo,
	só pode ser divisivel por 1 e por ele mesmo, se for divisivel
	por outro número, ele não é um número primo, exemplo o 4, ele
	é divisivel por 1, por 2 e por ele mesmo, entao não é um número primo.
	1, 2, 3, 4, 5, 6, 7, 8, 9...
	*/
	
	int vet[9], i, j, cont;
	
	for(i = 0; i < 9; i++){
		printf("Insira um número inteiro: \n");
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
			printf("%d é primo, posição: %d.\n", vet[i], i);
		}
	}
	
}
