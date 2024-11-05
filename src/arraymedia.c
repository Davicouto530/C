#include <stdio.h>

int main() {
    int n[] = {13,8,23,95,47,14,10,45,165};
    int p;
    int soma = 0;
    int media;

    for(int p = 0; p <= 8; p++) {
        soma += n[p];
        media = soma / 9;
    }

    printf("O valor da soma é %d, e o valor da média é %d\n", soma, media);

    return 0;
}