#include <stdio.h>

int main(){
	float nota;
	
	printf("Insira a nota: \n");
	scanf("%.2f", &nota);
	
	if(nota >= 7.0) {
		printf("Aprovado(a)!\n");
	} else {
		printf("Reporvado(a)!\n");
	}
}
