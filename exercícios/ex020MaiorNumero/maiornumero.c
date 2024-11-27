#include <stdio.h>

int main() {
	float num1, num2;
	
	printf("-----Comparação pra ver qual numero e maior-----\n");
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("O maior numero entre os dois foi: %.2f", num1);
	} else if(num2 > num1){
		printf("O maior numero entre os dois foi: %.2f", num2);
	} else if(num1 == num2 || num2 == num1){
		printf("Os dois valores digitados sao iguais.");
	} else {
		printf("Valor inválido");
	}
	
	return 0;
}
