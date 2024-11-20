#include <stdio.h>

int main() {
	int a, b, soma, sub, mult, div;
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &a);
	printf("Digite o segundo número: \n");
	scanf("%d", &b);
	
	soma = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	
	printf("-----Resultado das contas-----\n");
	printf("Soma: %d. \n", soma);
	printf("Subtração: %d. \n", sub);
	printf("Multiplicação: %d. \n", mult);
	printf("Divisão: %d. \n", div);
	
	return 0;
}
