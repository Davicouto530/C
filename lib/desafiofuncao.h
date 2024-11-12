#include <stdio.h>

int maiorNumero(int x, int y){
    int m;
    if(x > y) {
        m = x;
    } else {
        m = y;
    }

    return m;
}

char sexo(char letra) {
    if(letra == 'M' || letra == 'm') {
        printf("Masculino");
    } else if(letra == 'F' || letra == 'f') {
        printf("Feminino");
    } else {
        printf("Sexo inválido");
    }
}

void vogal(char letra) {
    if(letra == 'a') {
        printf("A é uma vogal\n");
    } else if(letra == 'e') {
        printf("E é uma vogal\n");
    } else if(letra == 'i') {
        printf("I é uma vogal\n");
    } else if(letra == 'o') {
        printf("O é uma vogal\n");
    } else if(letra == 'u') {
        printf("U é uma vogal\n");
    } else {
        printf("%c é uma consoante\n", letra);
    }
}

void vogal1(char letra) {
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("É uma vogal\n");
    } else {
        printf("%c é uma consoante\n", letra);
    }
}

void reajuste(float salario) {
    float valor_aumento;
    float novo_salario;

    if(salario <= 280) {
        valor_aumento = salario * 20.0 / 100;
        novo_salario = salario + valor_aumento;
        
        printf("O salario antigo é %.2f, e foi reajustado em 20%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    } else if(salario > 280 && salario <= 700) {
        valor_aumento = salario * 15.0 / 100;
        novo_salario = salario + valor_aumento;

        printf("O salario antigo é %.2f, e foi reajustado em 15%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    } else if(salario > 700 && salario <= 1500) {
        valor_aumento = salario * 10.0 / 100;
        novo_salario = salario + valor_aumento;

        printf("O salario antigo é %.2f, e foi reajustado em 10%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    } else {
        valor_aumento = salario * 5 / 100;
        novo_salario = salario + valor_aumento;

        printf("O salario antigo é %f, e foi reajustado em 5%. O valor de aumento é %f e novo salário é %f\n", salario, valor_aumento, novo_salario);
    }
}

int notas(int n1, int n2, int n3, int n4) {
    int media;

    media = (n1 + n2 + n3 + n4) / 4;

    return media;
}