#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Somat�rio entre n�meros 1 a 10
	
	int i, soma;
	soma = 0;
	i = 0;
	
	while(i <= 10){
		soma += i;
		i++;
	}
	
	printf("A soma dos n�meros de 1 a 10 �: %d.\n", soma);
}
