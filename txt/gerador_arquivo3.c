#include <stdio.h>

int main() {

    FILE *arquivo;
    int n;

    printf("Digite um número para o arquivo.\n");
    scanf("%d", &n);

    arquivo = fopen("numero_digitado.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%d", n);
    fclose(arquivo);

    return 0;
}
