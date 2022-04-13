#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[20], vnum=0, ind=0;
		printf("Este programa recebe 20 números inteiros em um vetor, e encontra o menor elemento  e sua posição\n\n");
		
		for(int i=0;i<20;i++){
			printf("Entre com um número para a posição %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}		
		vnum=vtnum[0];
		for(int i=0;i<20;i++){
			if(vtnum[i]<vnum){
        	vnum=vtnum[i];
            ind=i;
        	}
    	}
    	printf("\n\nO menor número é %i", vnum);
		for(int i=0;i<20;i++){
			if(vnum==vtnum[i]){
			printf("\nO número está na posição %iº do vetor\n\n", ind);
			}
		}
return 0;
}
