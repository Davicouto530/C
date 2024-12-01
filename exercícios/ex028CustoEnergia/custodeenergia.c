#include <stdio.h>
#include <locale.h>

//Custo de energia

// I - o valor, em reais, de cada quilowatt;
// II - o valor, em reias, a ser pago por essa resid�ncia;
// III - o valor, em reias, a ser pagocom desconto de 15%.

void calcKw(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_desc){ // O "*" no come�o � para indicar que � uma variavel de saida
	(*v_kw) = v_sal / 1000;    //O "(*nome da variavel)" indica para a m�quina que � uma variavel de saida
	(*v_rs) = (*v_kw) * q_kw;
	(*v_desc) = (*v_rs) * 0.85;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor_sal, quant_kw, valor_kw, valor_reais, valor_descon;
	
	printf("Insira o sal�rio m�nimo: \n");
	scanf("%f", &valor_sal);
	
	printf("Insira a quantidade de quilowatt gastos: \n");
	scanf("%f", &quant_kw);
	
	calcKw(valor_sal, quant_kw, &valor_kw, &valor_reais, &valor_descon); //O "&" no come�o das tres variaveis s�o para quando alterar la na variavel da 
																		 //funcao com os "*" vai alterar igual aqui nas variaveis de baixo 
	
	printf("Valor de 1 KW (em R$): %.2f.\n", valor_kw);
	printf("Valor a ser pago pela resid�ncia (em R$): %.2f.\n", valor_reais);
	printf("Valor com desconto (em R$): %.2f.\n", valor_descon);
	
	return 0;
}
