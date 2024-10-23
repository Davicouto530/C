#include <stdio.h>

int main() {
    int n1;
    int n2;
    int rs;

    // Alocar um número digitado por um usuário no endereço de memória da variável n1

    printf("Digite um número: \n");
    scanf("%d", &n1);

    printf("Digite outro número: \n");
    scanf("%d", &n2);

    // Realizar a soma entre n1 e n2
    rs = n1 + n2;

    // Exibir o resultado da soma
    printf("O resultado é %d\n", rs);
    return 0;
}