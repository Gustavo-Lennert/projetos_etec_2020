#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
	int vtnum[20], vmedia=0, vsoma=0, vqtd=0; 
    printf("Este programa recebe 20 n�meros inteiros em um vetor,e apresenta a m�dia deles\n e quais n�meros do vetor s�o maiores que a m�dia.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Insira um n�mero para a posi��o %i do vetor:", i);
        scanf("%i", &vtnum[i]);
        vsoma+=vtnum[i];
    }
    vmedia=vsoma/20;

    for(int i=0;i<20;i++){
    	if(vtnum[i]>vmedia){
    	vqtd++;
		} 
	}
	 printf("\n\nA m�dia dos n�meros �: %.i", vmedia);
    printf("\n\nA quantidade de n�meros maiores que a m�dia s�o: %.i", vqtd);
  	
return 0; 
}
