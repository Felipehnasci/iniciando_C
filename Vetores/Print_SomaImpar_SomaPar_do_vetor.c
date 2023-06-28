#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia os valores de um vetor inteiro de tamanho 10, e imprima o valor da soma dos números ímpares e ovalor das soma dos números pares presentes neste vetor e apresente os resultados.

int main() {
    int vetor[10], somaImpares = 0, somaPares = 0, i;
    
    printf("Digite os valores do vetor:\n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
        } else {
            somaImpares += vetor[i];
        }
    }
    printf("A soma dos numeros impares eh: %d\n", somaImpares);
    printf("A soma dos numeros pares eh: %d\n", somaPares);
    
    return 0;
}