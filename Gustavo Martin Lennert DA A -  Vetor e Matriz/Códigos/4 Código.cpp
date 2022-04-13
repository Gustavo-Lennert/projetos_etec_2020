#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vnum=0, vqtd=0;
		printf("Este programa recebe 10 números inteiros em um vetor, e outro para análisar se ele existe no vetor qual sua posição\n\n");
		
		for(int i=0;i<10 ;i++){
			printf("Entre com um número para a posição %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		printf("\nInsira um número para verifcar se o mesmo está no vetor,\n e em qual posição ele se encontra:");
		scanf("%i", &vnum);
	
		for(int i=0;i<10;i++){
			if(vnum==vtnum[i]){
			vqtd++;
			}
		}
		if(vqtd>0){
			for(int i=0;i<10;i++){
				if(vnum==vtnum[i]){
					printf("\nO número está na posição %iº do vetor\n\n", i);		
				}
			}
		}
		else{
			printf("\nO número não está no vetor\n\n");
		}
return 0;
}
