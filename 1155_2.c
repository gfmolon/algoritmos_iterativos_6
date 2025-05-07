#include <stdio.h>

int main() {

    int n, i;
    printf("Qual o valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {

        if (n % i == 0) {
            printf("Menor Divisor exceto 1: %d\n", i);
            break;
        }
    }

    return 0;
}
