#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fun_maior(float *vetor, int tam){
	int maior=0;

	for(int i=0; i<tam; i++){
		if(vetor[i]>maior){
		maior=vetor[i];
		}
	}
	return maior;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	float vet[20]={0};
	printf("\nPrograma an�lise de maior n�mero em um vetor\n");
	for(int i=0; i<20; i++){
		printf("\nInsir� o %i� n�mero do vetor: ", i+1);
		scanf("%f", &vet[i]);	
	}
	printf("\n\nO maior n�mero do vetor �: %.2f", fun_maior(vet,20));
return 0;
}
