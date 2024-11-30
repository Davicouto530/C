#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Somatório entre números 1 a 10
	
	int i, soma;
	soma = 0;
	
	for(i = 0; i <= 10; i++){
		soma += i;
	}
	
	printf("A soma dos números de 1 a 10 é: %d.\n", soma);
}
