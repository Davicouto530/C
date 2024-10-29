#include <stdio.h>

int main() {
    int mes;

    printf("Digite o número do mês que você deseja com números entre (1) e (12): \n");
    scanf("%d", &mes);

    if(mes == 12 || mes == 1 || mes == 2) {
        printf("Este mês é verão \n");
    } else if(mes == 3 || mes == 4 || mes == 5) {
        printf("Este mês é outono \n");
    } else if(mes == 6 || mes == 7 || mes == 8) {
        printf("Este mês inverno \n");
    } else if(mes == 9 || mes == 10 || mes == 11) {
        printf("Este mês é primavera \n");
    } else {
        printf("Mês inexistente \n");
    }

    return 0;
}