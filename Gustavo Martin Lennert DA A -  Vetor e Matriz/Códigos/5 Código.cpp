#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[20], vnum=0, ind=0;
		printf("Este programa recebe 20 n�meros inteiros em um vetor, e encontra o menor elemento  e sua posi��o\n\n");
		
		for(int i=0;i<20;i++){
			printf("Entre com um n�mero para a posi��o %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}		
		vnum=vtnum[0];
		for(int i=0;i<20;i++){
			if(vtnum[i]<vnum){
        	vnum=vtnum[i];
            ind=i;
        	}
    	}
    	printf("\n\nO menor n�mero � %i", vnum);
		for(int i=0;i<20;i++){
			if(vnum==vtnum[i]){
			printf("\nO n�mero est� na posi��o %i� do vetor\n\n", ind);
			}
		}
return 0;
}
