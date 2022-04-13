#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vsoma=0;
		printf("Programa soma de 10 números inteiros em posições pares do vetor\n\n");
		
		for(int i=0;i<10 ;i++){
			printf("Entre com um número para a posição %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		for(int i=0;i<10;i++){
			if(i%2==0){
				printf("Um dos números das posições pares é: %i\n",vtnum[i]);
				vsoma+=vtnum[i];
			}
		}
		
		printf("\n\nA soma dos números nas posições pares do vetor será de: %.i", vsoma);
return 0;
}
