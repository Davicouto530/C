#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Criando e inicializando
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("-----In�cio-----\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Atribuindo valores aos campos
	
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os campos via c�digo: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Solicitando inser��es via teclado
	
	printf("\nInsira sua idade inteira: \n");
	scanf("%d", &pes.idade);
	printf("\nInsira o seu peso: \n");
	scanf("%f", &pes.peso);
	printf("\nInsira seu nome: \n");
	scanf("%s", pes.nome);
	
	printf("\nAlterando com dados do usu�rio: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
}
