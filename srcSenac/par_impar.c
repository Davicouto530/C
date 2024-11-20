#include <stdio.h>

int main() {
    int n;

    printf("Digite um número para saber se é PAR ou ÍMPAR: \n");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("O número %d é PAR \n");
    } else {
        printf("O número %d é ÍMPAR \n");
    }

    return 0;
}