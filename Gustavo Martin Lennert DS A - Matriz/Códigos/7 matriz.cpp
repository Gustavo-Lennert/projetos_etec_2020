#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int vet1[10]={0}, vet2[10]={0}, vet3[10]={0};
	printf("Programa multiplicação de vetor 1 e 2\n\n");

	for(int i=0;i<10;i++){	
		printf("Entre com um número inteiro para a posição %i do primeiro vetor :", i);
		scanf("%i", &vet1[i]);
		printf("\n");
		printf("Entre com um número inteiro para a posição %i do segundo vetor :", i);
		scanf("%i", &vet2[i]);
	}
	for(int i=0;i<10;i++){
	vet3[i]=vet1[i]*vet2[i];			
	}
	printf("\n\nMultiplicão dos dois vetores:\n");
	for(int i=0;i<10;i++){
	printf("%i ", vet3[i]);			
	}
return 0;
}
