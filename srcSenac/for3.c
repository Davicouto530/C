#include <stdio.h> 

int main() {
    int ano;
    int contador = 0;

    for(ano = 1930 ; ano <= 2024 ; ano++) {
        if(ano % 4 == 0) {
        printf("O ano %d é bissexto \n", ano);
        contador++;
        }
    }

    
    printf("A quantidade de anos bissextos é %d \n", contador);

    return 0;
}