#include <stdio.h>

int main() {
    int n[] = {13,8,23,95,47,14,10,45,165};
    int p;
    int soma = 0;
    
    for(int p = 0; p <= 8; p++) {
        soma += n[p];
    }

    printf("O resultado da soma dos números deu %d\n", soma);

    return 0;
}