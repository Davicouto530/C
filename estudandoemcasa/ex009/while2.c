#include <stdio.h>

int main() {
	int num;
	
	printf("Digite um numero para comecar e ir diminuindo de 1 em 1: \n");
	scanf("%d", &num);
	
	while(num >= 1) {
		printf("%d ", num);
		num--;
	}
}
