#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main() {
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4;
    int media;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua nota de matemática:\n");
    scanf("%d", &n1);

    printf("Digite sua nota de português:\n");
    scanf("%d", &n2);

    printf("Digite sua nota de biologia:\n");
    scanf("%d", &n3);

    printf("Digite sua nota de matemática:\n");
    scanf("%d", &n4);

    printf("%s sua média foi: %.2d\n", &nome, notas(n1, n2, n3, n4));

    return 0;
}