#include <stdio.h>

int main() {

    int n1, n2, aux;

    printf("Informe o valor de n1\n");
    scanf("%d", &n1);
    printf("Informe o valor de n2\n");
    scanf("%d", &n2);

    while (n2 != 0) {
        aux = n1 % n2;
        n1 = n2;
        n2 = aux;
    }

    printf("MDC: %d\n", n1);

    return 0;
}
