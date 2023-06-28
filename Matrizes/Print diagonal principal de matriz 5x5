#include <stdio.h>

//Escreva um programa utilizando a Linguagem C que leia uma matriz 5 x 5. E mostre apenas os valores contidos na diagonal principal.

int main(){
		
	int matrizA[5][5], i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			printf("Digite o valor da linha %d e coluna %d: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			if (i == j){
				printf("%d ", matrizA[i][j]);
			} else{
				printf("  ");
			}
		}
		printf("\n");
	}	
}
