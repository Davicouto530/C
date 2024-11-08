#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main() {
    int x;
    int y;

    printf("Digite o primeiro valor para comparar qual é maior e tecle ENTER\n");
    scanf("%d", &x);

    printf("Digite o segundo valor e tecle ENTER\n");
    scanf("%d", &y);

    printf("O maior número entre os dois é %d\n", maiorNumero(x,y));

    return 0;
}