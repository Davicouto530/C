#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Os oitos primeiros números da sequência de Fibonacci
	
	//1º 2º 3º 4º 5º 6º 7º...
	//0- 1- 1- 2- 3- 5- 8- 13- 21- 34- 55...
	
	int i, ant1, ant2, atual;
	ant1 = 1;
	ant2 = 0;	
	
	printf("Série de Fibonacci (8 primeiros termos:\n)");
	printf("%d", ant2);
	printf("%d", ant1);
	
	for(i = 3; i <= 8; i++){
		atual = ant1 + ant2;
		printf("%d", atual);
		ant2 = ant1;
		ant1 = atual;
	}
}
