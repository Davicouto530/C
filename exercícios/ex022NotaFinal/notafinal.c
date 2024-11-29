#include <stdio.h>

int main() {
	float trab, avali, exame, media;
	
	printf("Insira a nota do seu trabalho: \n");
	scanf("%f", &trab);
	
	printf("Insira a nota da sua avaliacao: \n");
	scanf("%f", &avali);
	
	printf("Insira a nota do seu exame: \n");
	scanf("%f", &exame);
	
	//Media ponderada
	media = (trab * 2 + avali * 3 + exame * 5) / 10;
	
	printf("A média foi: %.2f.\n", media);
	
	if(media >= 8.0 && media <= 10.0){
		printf("Sua média conceito foi: A.\n");
	} else if(media >= 7.0 && media < 8.0){
		printf("Sua média conceito foi: B.\n");
	} else if(media >= 6.0 && media < 7.0){
		printf("Sua média conceito foi: C.\n");
	} else if(media >= 5.0 && media < 6.0){
		printf("Sua média conceito foi: D.\n");
	} else if(media >= 0.0 && media < 5.0){
		printf("Sua média conceito foi: E.\n");
	}
}
