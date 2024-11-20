#include <stdio.h>

float maior(float num1, float num2){
	if(num1 > num2){
		return num1;
	} else {
		return num2;
	}
}

int main() {
	float x, y, m;
	
	printf("-----Verificando qual dos valores digitados será maior-----\n");
	
	printf("Insira um valor: \n");
	scanf("%f", &x);
	printf("Insira outro valor: \n");
	scanf("%f", &y);
	
	m = maior(x,y);
	printf("O maior número e: %.2f", m);
}
