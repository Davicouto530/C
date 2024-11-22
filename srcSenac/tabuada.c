#include <stdio.h>

int main() {
    int num;
    int mult;
    int n;

    printf("Digite de 1 a 10 para escolher a tabuada que vocẽ quer: \n");
    scanf("%d", &num);

    for(n = 1; n <= 10; n++){
        mult = n * num;
        printf("%d x %d = %d\n", num, n, mult);
    }
}