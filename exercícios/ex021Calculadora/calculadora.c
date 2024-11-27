#include <stdio.h>

int main() {
	int conta;
	float num1, num2, soma;
	
	printf("-----Calculadora-----\n");
	
	printf("Digite 1 para somar E TECLE ENTER;\n");
	printf("Digite 2 para subtrair E TECLE ENTER;\n");
	printf("Digite 3 para multiplicar E TECLE ENTER;\n");
	printf("Digite 4 para dividir E TECLE ENTER;\n");
	scanf("%d", &conta);
	
	printf("Insira o primeiro numero E TECLE ENTER: ");
	scanf("%f", &num1);
	
	printf("Insira o segundo numero E TECLE ENTER: ");
	scanf("%f", &num2);
	
	if(conta == 1) {
		soma = num1 + num2;
		printf("O resultado da soma de %.2f mais %.2f deu: %.2f\n", num1, num2, soma);
	} else if(conta == 2) {
		soma = num1 - num2;
		printf("O resultado da subtracao de %.2f menos %.2f deu: %.2f\n", num1, num2, soma);
	} else if(conta == 3) {
		soma = num1 * num2;
		printf("O resultado da multiplicacao de %.2f vezes %.2f deu: %.2f\n", num1, num2, soma);
	} else if(conta == 4) {
		if(num2 == 0){
			printf("Divisao por zero.\n");
		}else {
			soma = num1 / num2;
			printf("O resultado da divisao de %.2f divido por %.2f deu: %.2f\n", num1, num2, soma);	
		}
	} else {
		printf("Valor inválido");
	}
}
