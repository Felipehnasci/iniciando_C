#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que permita ao usuário preencher um vetor inteiro de tamanho dez. Imprima o vetor seguindo a ordem inversa de suas posições.

int main() {
	int vetor[10], i = 0;
	
	for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 9; i >= 0; i--) {
        printf("%d", vetor[i]);
    }
return 0;
}
