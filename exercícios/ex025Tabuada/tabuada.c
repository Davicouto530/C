#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, tab, mult;
	
	printf("-----Tabuada-----\n");
	
	printf("Qual tabuada você quer: \n");
	scanf("%d", &tab);
	
	for(i = 1; i <= 10; i++){
		mult = tab * i;
		printf("%d x %d = %d\n", tab, i, mult);
	}
	
	
}
