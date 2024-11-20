#include <stdio.h>

int main() {
	int i;
	
	for(i = 1; i <= 10; i++){
		
		if(i == 5) {
			continue;
		} else if(i == 7) {
			continue;
		}
		
		printf("%d ", i);
	}
}
