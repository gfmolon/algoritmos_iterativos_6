#include <stdio.h>

int main() {

    int n;

    while (1) {

        printf("Informe um número:\n");
        scanf("%d", &n);

        if (n < 0) {
            printf("Programa encerrado.\n");
            break;
        } else {
            printf("%d\n", n);
        }
    }

    return 0;
}
