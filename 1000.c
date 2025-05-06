#include <stdio.h>

int main() {

    int n, i, cont = 0;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }

    printf("Divisores: %d", cont);

    return 0;
}
