#include <stdio.h>
#include <locale.h>

//Custo de energia

// I - o valor, em reais, de cada quilowatt;
// II - o valor, em reias, a ser pago por essa residência;
// III - o valor, em reias, a ser pagocom desconto de 15%.

void calcKw(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_desc){ // O "*" no começo é para indicar que é uma variavel de saida
	(*v_kw) = v_sal / 1000;    //O "(*nome da variavel)" indica para a máquina que é uma variavel de saida
	(*v_rs) = (*v_kw) * q_kw;
	(*v_desc) = (*v_rs) * 0.85;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor_sal, quant_kw, valor_kw, valor_reais, valor_descon;
	
	printf("Insira o salário mínimo: \n");
	scanf("%f", &valor_sal);
	
	printf("Insira a quantidade de quilowatt gastos: \n");
	scanf("%f", &quant_kw);
	
	calcKw(valor_sal, quant_kw, &valor_kw, &valor_reais, &valor_descon); //O "&" no começo das tres variaveis são para quando alterar la na variavel da 
																		 //funcao com os "*" vai alterar igual aqui nas variaveis de baixo 
	
	printf("Valor de 1 KW (em R$): %.2f.\n", valor_kw);
	printf("Valor a ser pago pela residência (em R$): %.2f.\n", valor_reais);
	printf("Valor com desconto (em R$): %.2f.\n", valor_descon);
	
	return 0;
}
