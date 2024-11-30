#include <stdio.h>
#include <locale.h>

float calcLucroDist(float p_fab, float por_dist){
	return p_fab * por_dist / 100;
}

float calcImpostos(float p_fab, float por_imp){
	return p_fab * por_imp / 100;
}

float calcPrecoFinal(float p_fab, float v_dist, float v_imp){
	return p_fab + v_dist + v_imp;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco_f, proce_dist, porc_imp, lucro_dist, imposto, valorfinal;
	
	printf("Insira o preço de fábrica: \n");
	scanf("%f", &preco_f);
	
	printf("Insira o percentual de lucro do distribuidor: \n");
	scanf("%f", &proce_dist);
	
	printf("Insira o percentual de imposto: \n");
	scanf("%f", &porc_imp);
	
	lucro_dist = calcLucroDist(preco_f, proce_dist);
	
	imposto = calcImpostos(preco_f, porc_imp);
	
	valorfinal = calcPrecoFinal(preco_f, lucro_dist, imposto);
	
	printf("O lucro do distribuidor: R$ %.2f\n", lucro_dist);
	printf("Impostos: R$ %.2f\n", imposto);
	printf("Valor final: R$ %.2f\n", valorfinal);
}

