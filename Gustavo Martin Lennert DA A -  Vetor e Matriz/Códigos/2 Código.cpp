#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vsoma=0;
		printf("Programa soma de 10 n�meros inteiros em posi��es pares do vetor\n\n");
		
		for(int i=0;i<10 ;i++){
			printf("Entre com um n�mero para a posi��o %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		for(int i=0;i<10;i++){
			if(i%2==0){
				printf("Um dos n�meros das posi��es pares �: %i\n",vtnum[i]);
				vsoma+=vtnum[i];
			}
		}
		
		printf("\n\nA soma dos n�meros nas posi��es pares do vetor ser� de: %.i", vsoma);
return 0;
}
