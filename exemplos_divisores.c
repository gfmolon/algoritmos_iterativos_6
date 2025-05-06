#include <stdio.h>

int main() {
    int n, i, quociente, resto;

    printf("Digite um número inteiro maior que 0:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: número deve ser maior que 0.\n");
        return 1;
    }

    printf("\nDivisões de %d:\n", n);
    printf("i\t%d ÷ i\tQuociente\tResto\tÉ divisor?\n", n);
    printf("-------------------------------------------------------\n");

    for (i = 1; i <= n; i++) {
        quociente = n / i;
        resto = n % i;

        printf("%d\t%d ÷ %d\t%8d\t%5d\t", i, n, i, quociente, resto);

        if (resto == 0) {
            printf("SIM\n");
        } else {
            printf("NÃO\n");
        }
    }

    return 0;
}
