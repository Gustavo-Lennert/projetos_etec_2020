#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int vet1[10]={0}, vet2[10]={0}, vqtd=0;
	printf("Programa multiplica��o de vetor 1 e 2\n\n");

	for(int i=0;i<10;i++){	
		printf("Entre com um n�mero inteiro para a posi��o %i do primeiro vetor :", i);
		scanf("%i", &vet1[i]);
		printf("\n");
		printf("Entre com um n�mero inteiro para a posi��o %i do segundo vetor :", i);
		scanf("%i", &vet2[i]);
	}
	for(int i=0;i<10;i++){
		if(vet1[i]==vet2[i]){
		printf("\n\nN�meros iguais:");
		printf("%i ",vet1[i]);
		vqtd++;
		}		
	}
	printf("\n\nQuantidade de n�meros iguais nos dois vetores: %i", vqtd);
return 0;
}
