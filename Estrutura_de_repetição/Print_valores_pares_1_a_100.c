#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares de 1 a 100:\n");

    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}