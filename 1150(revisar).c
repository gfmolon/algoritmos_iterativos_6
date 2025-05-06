
#include <stdio.h>

int main() {
    int n, d;

    printf("Qual o valor de n (maior que 1)?\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro: o número deve ser maior que 1.\n");
        return 1;
    }

    d = n - 1;

    while (d > 0) {
        if (n % d == 0) {
            printf("Maior divisor (exceto o próprio número): %d\n", d);
            break;
        }
        d--;
    }

    return 0;
}
