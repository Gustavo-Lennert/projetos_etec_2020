#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
	int vtnum[20], vmedia=0, vsoma=0, vqtd=0; 
    printf("Este programa recebe 20 n�meros inteiros em um vetor, e calcula a m�dia entre os n�meres entre 5 e 10.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Insira um n�mero para a posi��o %i do vetor:", i);
        scanf("%i", &vtnum[i]);
    }
  	 for(int i=0;i<20;i++){
		if((vtnum[i]>5) && (vtnum[i]<10)){
			vqtd++;
			vsoma+=vtnum[i];
		}
	}
	vmedia=vsoma/vqtd;

	printf("\n\nA quantidade de n�meros entre 5 e 10 � %.i,  e a m�dia dos mesmos � %.i", vqtd, vmedia);

return 0;
}
