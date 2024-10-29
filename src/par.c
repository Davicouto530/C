#include <stdio.h>

// Este programa obtem um número do usuário e diz se é par, exibindo uma mensagem em tela

int main() {
     int n;

     printf("Digite um número e tecle ENTER \n");
     scanf("%d", &n);

     if(n % 2 == 0) {
        printf("O valor %d é PAR \n", n);
     }

     return 0;
}