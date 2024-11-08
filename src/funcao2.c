#include <stdio.h>

int devolveResto(int valor, int div);

int main() {
    printf("O resto entre os números 2 e 5 é %d\n", devolveResto(2,5));

    return 0;
}

int devolveResto(int valor, int div){
    return valor % div;
}