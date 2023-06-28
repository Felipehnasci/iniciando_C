#include <stdio.h>

//Elabore um programa em C que gera e escreve os números ímpares dos números lidos entre 10 e 20.

int main() {
    int i;

    printf("Numeros impares entre 10 e 20:\n");

    for (i = 11; i <= 19; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}