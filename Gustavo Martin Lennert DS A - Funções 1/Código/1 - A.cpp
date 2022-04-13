#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdvet(int *vetfun){
	int media=0,total=0;
	
	for(int i=0; i<=9;i++){
		total+=vetfun[i];
	}
	media=total/10;
	return media;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	int vet[10];
	
	printf("Calculo de média de números de 1 vetor \n\n");
	for (int i=0;i<10;i++){
	printf("Entre com um número para a posição %i do vetor : ",i+1);
	scanf("%i",&vet[i]);
	}
		
	printf("\n\n A média dos números do vetor é :%i",mdvet(vet));

return 0;
}
