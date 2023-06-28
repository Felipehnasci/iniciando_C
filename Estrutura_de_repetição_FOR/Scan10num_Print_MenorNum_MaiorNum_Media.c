#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia 10 números e
//armazene-os em um vetor. Esses números são distintos, ou seja, o vetor não
//armazenará valores repetidos.

int main() {
    int i, num;
    int maior, menor;
    int soma = 0;
    float media;

    printf("Digite 10 valores inteiros e positivos:\n");

    for (i = 1; i <= 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Valor inválido! Digite um número inteiro e positivo.\n");
            i--;
            continue;
        }

        if (i == 1) {
            maior = menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }

            if (num < menor) {
                menor = num;
            }
        }

        soma += num;
    }

    media = (float) soma / 10;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}
