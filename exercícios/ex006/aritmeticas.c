#include <stdio.h>

int main() {
	int a, b, soma, sub, mult, div;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: \n");
	scanf("%d", &b);
	
	soma = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	
	printf("-----Resultado das contas-----\n");
	printf("Soma: %d. \n", soma);
	printf("Subtra��o: %d. \n", sub);
	printf("Multiplica��o: %d. \n", mult);
	printf("Divis�o: %d. \n", div);
	
	return 0;
}
