#include <stdio.h>

int main() {
    float nota1,nota2,nota3,nota4,media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: \n");
    scanf("%f", &nota4);

    
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média é %f", media);

    return 0;
}