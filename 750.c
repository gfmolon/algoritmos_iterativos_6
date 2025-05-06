#include <stdio.h>

int main() {

    int n, i;
    printf("Informe até onde vai os números:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

    return 0;
}
