#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
	int vtnum[20]; 
    printf("Este programa recebe 20 números inteiros em um vetor, e apresenta apenas os números positivos do vetor.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Insira um número para a posição %i do vetor:", i);
        scanf("%i", &vtnum[i]);
    }
    printf("\n\nNúmeros positivos:");
	for(int i=0;i<20;i++){
		if(vtnum[i]>0){
			printf("\n\n");
			printf("%i", vtnum[i]);
		}
	}
return 0;
}
