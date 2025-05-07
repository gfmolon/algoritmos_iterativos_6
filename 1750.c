#include <stdio.h>

int main() {

    FILE *arquivo;
    int i;
    float peso, altura, imc, maior_imc;
    float peso_maior, altura_maior;

    printf("Informe o peso e altura\n");
    scanf("%f%f", &peso, &altura);

    peso_maior = peso;
    altura_maior = altura;
    maior_imc = peso / (altura * altura);

    arquivo = fopen("1750.txt", "w");
    if (arquivo == NULL) {
        return 1;
    }

    for (i = 1; i <= 9; i++) {
        printf("Informe o peso e altura\n");
        scanf("%f%f", &peso, &altura);
        imc = peso / (altura * altura);

        if (imc > maior_imc) {
            maior_imc = imc;
            peso_maior = peso;
            altura_maior = altura;
        }
    }

    fprintf(arquivo, "Maior Imc:%.2f\tMaior Peso:%.2f\tMaior Altura:%.2f\t",
            maior_imc, peso_maior, altura_maior);
    fclose(arquivo);
    return 0;
}
