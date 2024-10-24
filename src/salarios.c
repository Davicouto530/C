#include <stdio.h>

int main() {
    float sb, dt, di, df, td, sl;

    printf("Informe o salário bruto: \n");
    scanf("%f", &sb);

    dt = (6.0 / 100) * sb;

    di = (7.0 / 100) * sb;

    df = (8.0 / 100) * sb;

    td = dt + di + df;

    sl = sb - td;

    printf("O total de descontos: %.3f \n e o salário líquido: %.3f \n", td, sl);

    return 0;
}