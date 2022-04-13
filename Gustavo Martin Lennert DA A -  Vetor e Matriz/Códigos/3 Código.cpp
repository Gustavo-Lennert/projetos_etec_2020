#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vnum=0, vqtd=0;
		printf("Este programa recebe 10 números inteiros em 1 vetor, e análisa quais fazem parte dele o quais não fazem \n\n");
		for(int i=0;i<10;i++){
			printf("Entre com um número para a posição %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		printf("\nInsira um número para verifcar se o mesmo está no vetor:");
		scanf("%i", &vnum);
		for(int i=0;i<10;i++){
			if(vnum==vtnum[i]){
			vqtd++;
			}
		}
		if(vqtd>0){
			printf("\nO número está no vetor\n\n");	
		}
		else{
			printf("\nO número não está no vetor\n\n");	
		}
return 0;
}
