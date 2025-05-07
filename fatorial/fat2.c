#include <stdio.h>

int main() {

    int i, fat, n;

    while (1) {

        fat = 1;
        printf("Informe o valor de n\n");
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            fat *= i;
        }

        printf("Fatorial de %d é %d\n", n, fat);
    }
    return 0;
}
