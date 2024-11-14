#include <stdio.h>

void cadastro(char *nome, char *email, int *idade) {
    FILE *arquivo;
    arquivo = fopen("files/ptr_cad_cli.txt", "a");
    fprintf(arquivo,"Nome: %s\n", nome);
    fprintf(arquivo,"Email: %s\n", email);
    fprintf(arquivo, "Idade %d\n", * idade);
    fclose(arquivo);
}

int main() {
    char nome[30];
    char email[50];
    int idade;

    printf("Digite o seu nome e tecle ENTER\n");
    scanf("%[^\n]s",nome);

    printf("Digite o seu email e tecle ENTER\n");
    scanf("%s",email);

    printf("Digite a sua idade e tecle ENTER\n");
    scanf("%d", &idade);

    cadastro(nome,email,&idade);

    printf("Cadastrou\n");

    return 0;
}