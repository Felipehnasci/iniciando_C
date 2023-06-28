#include <stdio.h>

//Escreva um programa utilizando a Linguagem C Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

int main(){
		
	int matrizA[4][4],maiorq=0, i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			
			printf("Digite o valor da linha %d e coluna %d: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			
			printf("%d ", matrizA[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
		
			if(maiorq<matrizA[i][j]){
				maiorq = matrizA[i][j];
			}
		}
	}
	printf("O maior numero dessa matriz eh: %d ", maiorq);	
	system("pause");	
}