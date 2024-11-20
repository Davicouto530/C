#include <stdio.h>

int main() {
	float nota;
	
	printf("Insira a nota: \n");
	scanf("%f.2", &nota);
	
	if(nota >= 7.0){
		printf("Aprovado(a)!\n");
	}
}
