#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

int main(){
		
	int matrizA[4][4],maiorqdez=0, i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			
			printf("Digite o valor da linha %d e coluna %d: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			
			if (matrizA[i][j]>10){
				maiorqdez++;
			}
		}
	}
	printf("\nA matriz possui %d numero(s) maior(es) que dez.\n", maiorqdez);
	system("pause");
}
