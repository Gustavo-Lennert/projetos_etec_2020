#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void vet_media(int *media1, int *media2, int *vetor, int tam){
	int	soma1=0, soma2=0;
	
	for(int i=0; i<tam; i++){
		if(i<(tam/2)){
			soma1+=vetor[i];
		}
		else{
			soma2+=vetor[i];
		}
	}
	*media1= (soma1/(tam/2));
	*media2= (soma2/(tam/2));
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int vet[20]={0}, med1=0, med2=0;
	printf("\nPrograma calc�lo de m�dia 10 primeiros n�meros e 10 �ltimos de um vetor\n");
	for(int i=0; i<20; i++){
		printf("\nInsir� o %i� n�mero do vetor: ", i+1);
		scanf("%i", &vet[i]);	
	}
	vet_media(&med1, &med2, vet, 20);
	printf("\n\nA m�dia dos 10 primeiros n�meros do vetor �: %i\nE a m�dia dos �ltimos 10 n�meros do vetor �: %i", med1, med2);
return 0;
}
