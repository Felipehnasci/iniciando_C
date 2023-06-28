#include <stdio.h>

int main() {
    int i, num;
    int pares = 0;
    int impares = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}