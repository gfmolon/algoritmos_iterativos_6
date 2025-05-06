#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo\n");
    }

    fprintf(arquivo, "Arquivo gerado com sucesso!\n");

    fclose(arquivo);
    return 0;
}
