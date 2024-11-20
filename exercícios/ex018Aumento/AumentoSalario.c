#include <stdio.h>

int main(int argc, char *argv[]) {
	char nome[18];
	float salario, perc, aumento, novosalario;
	
	printf("Insira o nome do funcionario: ");
	scanf("%[^\n]s", nome);
	
	printf("Insira o valor do salario do funcionario: \n");
	scanf("%f", &salario);
	
	printf("Insira o percentual de aumentodo salario: \n");
	scanf("%f", &perc);
	
	aumento = salario * perc / 100;
	
	novosalario = salario + aumento;
	
	printf("O salario antigo do %s era %.2f, teve %.2f porcento de aumento sendo %.2f reais. O novo salario do funcionario e: %.2f\n", nome, salario, perc, aumento, novosalario);
}
