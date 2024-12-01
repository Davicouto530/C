#include <stdio.h>
#include <locale.h>

//Calculo do salario a receber

// I - a hora trabalhada vale a metade do salario minimo;
// II - o salario bruto equivale ao minimo de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// III - o imposto equivale a 3% do salario bruto;
// IV - o salario a receber equivale ao salario bruto menos o imposto.

float calcSalReceber(float num_horas, float sal_minimo){
	float horas_trab, sal_bruto, imposto, sal_receber;
	
	horas_trab = sal_minimo / 2.0;
	sal_bruto = num_horas * horas_trab;
	imposto = sal_bruto * 3 / 100;
	sal_receber = sal_bruto - imposto;
	
	return sal_receber;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hr_trab, sal_min, sal_rec;
	
	printf("Insira o números de horas trabalhadas: \n");
	scanf("%f", &hr_trab);
	
	printf("Insira o salário mínimo: \n");
	scanf("%f", &sal_min);
	
	sal_rec = calcSalReceber(hr_trab, sal_min);
	
	printf("O salário a receber pelo gestor é de: R$ %.2f.\n", sal_rec);
}
