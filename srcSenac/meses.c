#include <stdio.h>

int main() {
    int num_mes;

    printf("Digite o número do mês e tecle ENTER \n");
    scanf("%d", &num_mes);

    switch(num_mes) {
        case 1: 
        printf("Janeiro \n");
        break;

        case 2: 
        printf("Fevereiro \n");
        break;

        case 3: 
        printf("Março \n");
        break;

        case 4: 
        printf("Abril \n");
        break;

        case 5:
        printf("Maio \n");
        break;

        case 6:
        printf("Junho \n");
        break;

        case 7:
        printf("Julho");

        case 8:
        printf("Agosto \n");
        break;

        case 9:
        printf("Setembro \n");
        break;

        case 10:
        printf("Outubro \n");
        break;

        case 11:
        printf("Novembro \n");
        break;

        case 12:
        printf("Dezembro \n");
        break;          

        default:
        printf("Este mês não existe \n");
        break;
    }

    return 0;
}