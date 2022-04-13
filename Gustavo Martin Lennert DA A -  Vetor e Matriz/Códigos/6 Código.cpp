#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
	int vtnum[20], vmedia=0, vsoma=0, vqtd=0; 
    printf("Este programa recebe 20 números inteiros em um vetor,e apresenta a média deles\n e quais números do vetor são maiores que a média.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Insira um número para a posição %i do vetor:", i);
        scanf("%i", &vtnum[i]);
        vsoma+=vtnum[i];
    }
    vmedia=vsoma/20;

    for(int i=0;i<20;i++){
    	if(vtnum[i]>vmedia){
    	vqtd++;
		} 
	}
	 printf("\n\nA média dos números é: %.i", vmedia);
    printf("\n\nA quantidade de números maiores que a média são: %.i", vqtd);
  	
return 0; 
}
