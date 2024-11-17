#include <stdio.h>

int main() {
	int n[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i = 0; i < 5; i++) {
		s += n[i];
	}
	
	printf("Resultado: %.2f \n", s/5);
}
