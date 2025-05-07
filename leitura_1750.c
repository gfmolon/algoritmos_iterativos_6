#include <stdio.h>

int main() {

    char linha[200];
    FILE *arquivo;

    arquivo = fopen("1750.txt", "r");
    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}
