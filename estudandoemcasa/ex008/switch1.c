#include <stdio.h>

int main() {
	int d, n1, n2, soma, sub, mult, div;
	
	printf("Digite 1 para se quiser fazer conta de soma\n");
	printf("Digite 2 para se quiser fazer conta de subtra��o\n");
	printf("Digite 3 para se quiser fazer conta de multiplica��o\n");
	printf("Digite 4 para se quiser fazer conta de divis�o\n");
	printf("----------------------------------------------------------\n");
	
	printf("Insira uma das alternativas cima para fazer uma conta: \n");
	scanf("%d", &d);
	
	printf("Digite o primeiro n�mero para fazer a conta\n");
	scanf("%d", &n1);
	
	printf("Digite o segundo n�mero para fazer a conta\n");
	scanf("%d", &n2);
	
	switch(d){
		case 1:
			soma = n1 + n2;
			printf("O resultado da soma do valor de %d e do valor de %d �: %d\n", n1, n2, soma);
			break;
		case 2:
			sub = n1 - n2;
			printf("O resultado da subtra��o do valor de %d e do valor de %d �: %d\n", n1, n2, sub);
			break;
		case 3:
			mult = n1 * n2;
			printf("O resultado da multiplica��o do valor de %d e do valor de %d �: %d\n", n1, n2, mult);
			break;
		case 4:
			div = n1 / n2;
			printf("O resultado da divis�o do valor de %d e do valor de %d �: %d\n", n1, n2, div);
			break;
		default:
			printf("Valor inv�lido.\n");
			break;
	}
}
