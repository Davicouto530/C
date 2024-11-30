#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Os oitos primeiros n�meros da sequ�ncia de Fibonacci
	
	//1� 2� 3� 4� 5� 6� 7�...
	//0- 1- 1- 2- 3- 5- 8- 13- 21- 34- 55...
	
	int i, ant1, ant2, atual;
	ant1 = 1;
	ant2 = 0;	
	
	printf("S�rie de Fibonacci (8 primeiros termos:\n)");
	printf("%d", ant2);
	printf("%d", ant1);
	
	for(i = 3; i <= 8; i++){
		atual = ant1 + ant2;
		printf("%d", atual);
		ant2 = ant1;
		ant1 = atual;
	}
}
