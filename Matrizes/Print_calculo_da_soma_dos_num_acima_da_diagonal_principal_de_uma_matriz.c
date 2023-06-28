#include <stdio.h>

//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.

int main() {
    int matriz[3][3];
    int i, j, soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);
    return 0;
}