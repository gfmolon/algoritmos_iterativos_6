#include <stdio.h>

int main() {

    int n, fatorial = 1, i;
    printf("Informe um número\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d: %d\n", n, fatorial);

    return 0;
}
