#include <stdio.h>

int main(){
    int km1;
    int km2;
    int tmp1;
    int tmp2;
    int media;

    printf("Digite o KM inicial: \n");
    scanf("%d", &km1);

    printf("Digite o KM final: \n");
    scanf("%d", &km2);
 
    printf("Digite o tempo inicial: \n");
    scanf("%d", &tmp1);

    printf("Digite o tempo final: \n");
    scanf("%d", &tmp2);

    media = (km2 - km1) / (tmp2 - tmp1);

    printf("A velocidade média %d \n", media);

    return 0;
}