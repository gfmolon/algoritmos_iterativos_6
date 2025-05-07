#include <stdio.h>

int main() {

    FILE *arquivo;
    char linha[200];

    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro.\n");
    } else {

        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
    }

    return 0;
}
