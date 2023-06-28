#include stdio.h

Escreva um programa utilizando a Linguagem C que dados dois vetores, A (5 elementos) e B (8 elementos), faça um programa que imprima todos os elementos comuns aos dois vetores.

int main() {
    int vetorA[5], vetorB[8], i = 0, j = 0;
    
    printf(Digite os elementos do vetor A (5 elementos)n);
    for (i = 0; i  5; i++) {
        scanf(%d, &vetorA[i]);
    }
    printf(Digite os elementos do vetor B (8 elementos)n);
    for (i = 0; i  8; i++) {
        scanf(%d, &vetorB[i]);
    }
    
    printf(Elementos comuns aos dois vetoresn);
    
    for (i = 0; i  5; i++) {
        for (j = 0; j  8; j++) {
            if (vetorA[i] == vetorB[j]) {
                printf(%d , vetorA[i]);
                break;
            }
        }
    }
    return 0;
}
