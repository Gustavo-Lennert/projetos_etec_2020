#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int mat[5][5]={0}, vsoma=0, vmedia=0, vqtd=0;
	printf("Programa matriz 5x5, soma e média de números maiores que 5\n\n");
	for(int l=0;l<5;l++){
		for(int c=0;c<5;c++){	
		printf("Entre com um número inteiro para a linnha %i e a coluna %i da matriz:", l,c);
		scanf("%i", &mat[l][c]);
		}
	}
	for (int l=0;l<5;l++){
       for(int c=0;c<5;c++){
          printf(" %i",mat[l][c]);
       }
    printf("\n");
    }
    for(int l=0;l<5;l++){
		for(int c=0;c<5;c++){	
			if(mat[l][c]>5){
			vsoma+=mat[l][c];
			vqtd++;
			}
		}
	}
	vmedia=vsoma/vqtd;
	printf("\n\nA soma dos números maiores que 5 é %i, e a média deles é %i", vsoma, vmedia);
return 0;
}
