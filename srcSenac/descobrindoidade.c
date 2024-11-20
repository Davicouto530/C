#include <stdio.h>

int main() {
    int anoatual;
    int anonasci;
    int soma;

    printf("--------Descobrindo a sua idade--------\n");

    printf("Digite o ano atual que estamos e tecle ENTER: \n");
    scanf("%d", &anoatual);

    printf("Digite seu ano de nascimento e tecle ENTER: \n");
    scanf("%d", &anonasci);

    soma = anoatual- anonasci;

    printf("Estamos no ano de %d e vc nasceu em %d, sua idade é de %d\n", anoatual, anonasci, soma);

    return 0;
}