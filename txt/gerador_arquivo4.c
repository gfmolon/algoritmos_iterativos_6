#include <stdio.h>

int main() {

    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro\n");
        return 1;
    }

    fprintf(arquivo, "Boa noite, texto para consolidação do conhecimento.");
    fclose(arquivo);

    return 0;
}
