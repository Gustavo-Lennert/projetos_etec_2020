#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vnum=0, vqtd=0;
		printf("Este programa recebe 10 n�meros inteiros em um vetor, e outro para an�lisar se ele existe no vetor qual sua posi��o\n\n");
		
		for(int i=0;i<10 ;i++){
			printf("Entre com um n�mero para a posi��o %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		printf("\nInsira um n�mero para verifcar se o mesmo est� no vetor,\n e em qual posi��o ele se encontra:");
		scanf("%i", &vnum);
	
		for(int i=0;i<10;i++){
			if(vnum==vtnum[i]){
			vqtd++;
			}
		}
		if(vqtd>0){
			for(int i=0;i<10;i++){
				if(vnum==vtnum[i]){
					printf("\nO n�mero est� na posi��o %i� do vetor\n\n", i);		
				}
			}
		}
		else{
			printf("\nO n�mero n�o est� no vetor\n\n");
		}
return 0;
}
