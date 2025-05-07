
#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[200];

    // Abre o arquivo no modo leitura
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê e imprime cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
