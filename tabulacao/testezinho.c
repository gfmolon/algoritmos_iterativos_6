#include <stdio.h>

int main() {

    int n, i;
    FILE *arquivo;

    printf("Informe o número maior que 0\n");
    scanf("%d", &n);

    if (n <= 0 && n >= 10) {
        printf("Erro\n");
    } else {

        if (arquivo == NULL) {
            printf("Erro");
            return 1;
        }

        arquivo = fopen("arquivo_testezinho.txt", "w");

        fprintf(arquivo, "número\tmult\tresultado\n");
        for (i = 1; i <= 10; i++) {
            fprintf(arquivo, "%d\t * %d\t = \t%d\n", n, i, n * i);
        }
        fclose(arquivo);
        printf("Tudo executado com sucesso!\n");

        return 0;
    }
}
