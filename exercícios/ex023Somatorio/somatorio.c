#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Somat�rio entre n�meros 1 a 10
	
	int i, soma;
	soma = 0;
	
	for(i = 0; i <= 10; i++){
		soma += i;
	}
	
	printf("A soma dos n�meros de 1 a 10 �: %d.\n", soma);
}
