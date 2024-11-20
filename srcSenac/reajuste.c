#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main() {
    float sal;

    printf("Digite o salário do funcionário: \n");
    scanf("%f", &sal);

    reajuste(sal);

    return 0;
}