#include <stdio.h>

int main() {

    char linha[200];
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo.\n");
    } else {
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
        fclose(arquivo);
    }

    return 0;
}
