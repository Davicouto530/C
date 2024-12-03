#include <stdio.h>
#include <locale.h>

/*Faça um programa que seja capaz de armazenar os dados de tres pessoas:
nome, idade, peso e altura. Ao final, o algoritmo deve mostrar, 
na tela, o nome e a idade da primeira pessoa e o peso e altura da ultima pessoa.
*/

struct t_pessoa{
	char nome[100];
	int idade;
	float peso;
	float altura;
};

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	struct t_pessoa lista[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Insira o nome da posição %d.\n", i);
		scanf("%99[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("Insira a idade da posição %d.\n", i);
		scanf("%d", &lista[3].idade);
		fflush(stdin);
		
		printf("Insira o peso da posição %d.\n", i);
		scanf("%f", &lista[3].peso);
		fflush(stdin);
		
		printf("Insira a altura da posição %d.\n", i);
		scanf("%f", &lista[3].altura);
		fflush(stdin);
	}
	
	printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
	printf("Nome da primeira pessoa: %d.\n", lista[0].idade);
	
	printf("Peso da última pessoa: %.2f.\n", lista[2].peso);
	printf("Altura da última pessoa: %.2f.\n", lista[2].altura);
}
