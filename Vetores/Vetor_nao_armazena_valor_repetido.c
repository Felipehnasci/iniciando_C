#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia 10 números e armazene-os em um vetor. Esses números são distintos, ou seja, o vetor não armazenará valores repetidos.

int main() {
    int vetor[10], i = 0, j = 0;
    
    printf("Digite 10 numeros distintos:\n");
    
    for (i = 0; i < 10; i++) {
        int numero;
        scanf("%d", &numero);

        for (j = 0; j < i; j++) {
            if (vetor[j] == numero) {
                printf("O numero digitado ja existe. Digite outro numero.\n");
                i--;
                break;
            }
        }
        vetor[i] = numero;
    }
    
    printf("Valores armazenados no vetor:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    } 
    return 0;
}