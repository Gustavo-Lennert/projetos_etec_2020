#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "funcao.biblio.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	float vet[10]={0};
	printf("\nPrograma n�meros maiores que 10 em um vetor !\n");
	for(int i=0;i<10;i++){
		printf("\nEntre com um n�mero para a %i� posi��o do vetor: ", i+1);
		scanf("%f", &vet[i]);
	}
	printf("\n\nA quantidade de n�meros maiores que 10 no vetor �: %.2f", vet_maior(10,vet));

return 0;
} 
