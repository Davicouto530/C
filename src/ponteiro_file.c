#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("files/texto.txt", "a");
    // w -> write(escrever)
    // I -> (Read)
    // a -> Append(adicionar)

    fprintf(arquivo,"Vai corinthians!\n");
    fclose(arquivo);

    printf("Criamos o arquivo\n");
    return 0;
}