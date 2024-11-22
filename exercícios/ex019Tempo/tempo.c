#include <stdio.h>

//Conversões de segundos para minuto e hora

int main() {
	int seg, min, hr;
	
	printf("Insira o tempo em segundos: \n");
	scanf("%d", &seg);
	
	hr = seg / 3600;
	seg = seg - (3600 * hr);
	
	min = seg / 60;
	seg = seg - (60 * min);
	
	printf("Horas: %d.\n", hr);
	printf("Minutos: %d.\n", min);
	printf("Segundos: %d.\n", seg);
	
	return 0;
}
