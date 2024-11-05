#include <stdio.h>

int main() {
    char nome[20];

    printf("Digite o seu nome e tecle ENTER: \n");
    // Foi necessario utilizar os colchetes para que o comando scanf receba toda a cadeia de caracteres. 
    // O elemento ^(Circunflexo) foi usado para indicar onde começa o primeiro caracter. 
    // E comando \n, neste caso, está sendo usado para ler o espaço aplicado. 
    // Ao final é utilizado o caracter s (string).
    scanf("%[^\n]s", &nome);

    printf("Olá, %s. Sejá bem-vindo!\n", nome);

    return 0;
}