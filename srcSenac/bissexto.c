#include <stdio.h> 

int main() {
    int ano;

    printf("Digite o ano que você deseja: \n");
    scanf("%d", &ano);

    if(ano % 4 == 0) {
        printf("O ano é bissexto \n");
    } else {
        printf("O ano não é bissexto \n");
    }

    return 0;
}