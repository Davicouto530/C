#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main() {
    char letra;

    printf("Digite uma letra para ver se é consoante ou vogal tecle ENTER\n");
    scanf("%c", &letra);

    vogal(letra);

    return 0;
}