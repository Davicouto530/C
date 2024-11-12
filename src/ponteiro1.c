#include <stdio.h>

int main() {
    // Declaração de variável de idade
    int idade = 18;

    // Declaração de variável de ponteiro
    int *pidade = &idade;

    printf("A idade é %d e está nesse endereço de memória: %p e %p com o valor %d\n", idade, &idade, pidade, *pidade);

    return 0;

}