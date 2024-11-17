#include <stdio.h>

int main() {
	int n = 1;
	int num;
	
	printf("Digite ate que numero voce quer contar: \n");
	scanf("%d", &num);
	
	while(n <= num) {
		printf("%d ", n);
		n++;
	}	
}
