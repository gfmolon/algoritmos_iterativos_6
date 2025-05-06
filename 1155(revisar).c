#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Informe um número:\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro: o número deve ser maior que 1.\n");
    } else {
        while (i <= n) {
            if (n % i == 0) {
                printf("Menor divisor maior que 1: %d\n", i);
                break;
            }
            i++;
        }
    }

    return 0;
}
