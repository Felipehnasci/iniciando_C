#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia 2 matrizes 5 × 5, mostre-as na tela e mostre a soma entre as duas matrizes em seguida.

int main(){

	int matrizA[5][5], matrizB[5][5], matrizC[5][5], i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			printf("Digite o valor da linha %d e coluna %d: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	printf("Preencha a matriz B:\n");
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			printf("Digite o valor da linha %d e coluna %d: ", i, j);
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	printf("A soma das matrizes A e B eh:\n");
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
			printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}
}
