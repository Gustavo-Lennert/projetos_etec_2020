#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int mat[5][5]={0},vet[5]={0};
	printf("Programa matriz 5x5, somatório linha por linha\n\n");
	for(int l=0;l<5;l++){
		for(int c=0;c<5;c++){	
		printf("Entre com um número inteiro para a linnha %i e a coluna %i da matriz:", l,c);
		scanf("%i", &mat[l][c]);
		}
	}
	for (int l=0;l<5;l++){
       for(int c=0;c<5;c++){
        	printf(" %i",mat[l][c]);
        	vet[l]+=mat[l][c];
       }
    	printf("\n");
     }
     
	printf("\n\nApresentação da soma:\n");
	for(int i=0;i<5;i++){
       printf("%i ",vet[i]);
    }
return 0;
}
