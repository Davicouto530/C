#include <stdio.h>

int main() {
	int n[4];
	int i;
	float media = 0;
	
	printf("-----Media dos valores digitados-----\n");
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n[0]);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &n[1]);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d", &n[2]);
	
	printf("Digite o quarto numero: \n");
	scanf("%d", &n[3]);
	
	for(i = 0; i < 4; i++) {
		media += n[i];
	}
	
	printf("A media dos valores digitados foi: %.2f", media/4);
}
