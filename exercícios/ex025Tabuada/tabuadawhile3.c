#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, res;
	i = 1;
	
	while(i <= 10){
		j = 1;
		while(j <= 10){
			res = i * j;
			printf("%d x %d = %d\n", i, j, res);
			j++;
		}
		i++;
		printf("\n");
	}	
}
