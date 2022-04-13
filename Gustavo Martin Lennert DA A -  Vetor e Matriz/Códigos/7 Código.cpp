#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
	int vtnum[20], vmedia=0, vsoma=0, vqtd=0; 
    printf("Este programa recebe 20 números inteiros em um vetor, e calcula a média entre os númeres entre 5 e 10.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Insira um número para a posição %i do vetor:", i);
        scanf("%i", &vtnum[i]);
    }
  	 for(int i=0;i<20;i++){
		if((vtnum[i]>5) && (vtnum[i]<10)){
			vqtd++;
			vsoma+=vtnum[i];
		}
	}
	vmedia=vsoma/vqtd;

	printf("\n\nA quantidade de números entre 5 e 10 é %.i,  e a média dos mesmos é %.i", vqtd, vmedia);

return 0;
}
