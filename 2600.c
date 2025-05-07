//
//     -- M D C --
// REFAZER O ALGORITMO DE EUCLIDES. //
//
//
#include <stdio.h>

int main() {
    int n1, n2, aux;

    printf("Digite um número:\n");
    scanf("%d", &n1);

    printf("Digite um número:\n");
    scanf("%d", &n2);

    // Algoritmo de Euclides
    while (n2 != 0) {
        aux = n1 % n2;
        n1 = n2;
        n2 = aux;
    }

    printf("O MDC é: %d\n", n1);

    return 0;
}
