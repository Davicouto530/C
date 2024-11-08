#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main() {
    char letra;

    printf("Digite F se vc for mulher e digite M se vc for homem tecle ENTER\n");
    scanf("%c", &letra);

    sexo(letra);

    return 0;
}