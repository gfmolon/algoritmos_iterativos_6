#include <stdio.h>

int main() {

    int i, n, soma_div = 0;

    printf("Informe um número:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            soma_div += i;
        }
    }

    printf("Soma dos divisores: %d", soma_div);

    return 0;
}
