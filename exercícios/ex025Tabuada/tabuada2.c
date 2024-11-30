#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, res;
	
	for(i = 1; i <= 10; i++){ //Esse for de fora vai fazer mostrar a tabuada do 1 até o 10
		for(j = 1; j <= 10; j++){ //Esse for de dentro vai fazer a multiplicação de cada tabuada do 1 até o 10
			res = i * j;
			printf("%d x %d = %d\n", i, j, res);
		}
		printf("\n");
	}
	
}
