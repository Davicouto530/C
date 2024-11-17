#include <stdio.h>

int main () {
	int anonasci;
	int anoatual;
	int soma;
	
	printf("---------Descobrindo a sua idade\n---------");
	
	printf("Digite o ano que vc nasceu tecle ENTER: \n");
	scanf("%d", &anonasci);
	
	printf("Digite o ano que estamos tecle ENTER: \n");
	scanf("%d", &anoatual);
	
	soma = anonasci - anoatual;
	
	printf("Vc tem %d anos e nasceu em: %d. \n", soma, anonasci);
	
	return 0;
}
