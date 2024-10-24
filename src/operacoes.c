#include <stdio.h>

int main() {
    int num1;
    int num2;
    int somar;
    int subtrair;
    int multiplicar;
    int dividir;
    int resto;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1); //O "scanf" serve para pegar o que o usuário digitou e colocar dentro da variável. O "%d" serve para pegar números inteiros(decimais). O "&" pega o endereço de memória de uma variável 

    printf("Digite outro número: \n");
    scanf("%d", &num2);

    somar = num1 + num2; //A variável "somar" vai receber o valor da variável "num1" e somar(+) com o valor da variável "num2"

    subtrair = num1 - num2;
    multiplicar = num1 * num2; 
    dividir = num1 / num2; 
    resto = num1 % num2; 

    printf("A soma entre %d e %d é igual a %d \n",num1,num2,somar); //O "%d" serve para indicar que ali vai aparecer uma variável com os números decimais, e no final fora das aspas, coloca a ordem das variávieis que vc quer que apareça

    printf("A subtração entre %d e %d é igual a %d \n",num1,num2,subtrair);

    printf("A multiplicação entre %d e %d é igual a %d \n",num1,num2,multiplicar);

    printf("A divisão entre %d e %d é igual a %d \n",num1,num2,dividir);

    printf("O resto entre %d e %d é igual a %d \n",num1,num2,resto);

    return 0;
}