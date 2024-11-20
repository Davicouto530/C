#include <stdio.h>

int main() {
    int placa;

    printf("Digite o número final da placa do seu veículo e tecla ENTER: \n");
    scanf("%d", &placa);

    if(placa == 1 || placa == 2) {
        printf("Este veículo nãp pode circular na segunda-feira \n");
    } else if(placa == 3 || placa == 4) {
        printf("Este veículo não pode circular na terça-feira \n");
    } else if(placa == 5 || placa == 6) {
        printf("Este veículo não pode circular na quarta-feira \n");
    } else if(placa == 7 || placa == 8) {
        printf("Este veículo não pode circular na quinta-feira \n");
    } else if(placa == 9 || placa == 0) {
        printf("Este veículo não pode circular na sexta-feira \n");
    } else {
        printf("Número de placa inválido");
    }

    return 0;
}