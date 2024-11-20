#include <stdio.h> 

int main() {
    int i, n, rs;
    i = 1;

    printf("Digite um número para a tabuada e tecle EMTER \n");
    scanf("%d", &n);

    while(i <= 10) {
        rs = n + i;
        printf("%d + %d = %d \n",n, i, rs);
        i++;
    }

    return 0;
}