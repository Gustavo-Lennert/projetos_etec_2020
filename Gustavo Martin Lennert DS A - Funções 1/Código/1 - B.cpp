#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int search(int *vetfun, int varfun){
	int qtd=0;
	
	for(int i=0; i<=9;i++){
		if(varfun==vetfun[i]){
		qtd++;
		}
	}
	return qtd;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int vet[10], var=0;
	printf("Programa procurar número dentro do vetor\n\n");
	
	for (int i=0;i<10;i++){
	printf("\nEntre com um número para a posição %i do vetor : ",i+1);
	scanf("%d",&vet[i]);
	}
	printf("\n\nEntre com um número para conferir se está no vetor: ");
	scanf("%i", &var);
	
	if(search(vet,var)>0){
		printf("\nO número está no vetor !");	
	}
	else{ 
		printf("\nO número não está no vetor !");
	}
	
return 0;
}
