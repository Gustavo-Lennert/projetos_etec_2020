#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int mat[5][5]={0}, vsoma=0;
	printf("Programa matriz 5x5, apresentação de números em diagonal\n\n");
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
			if(l==c){
			vsoma+=mat[l][c];
			}
		}
	}
	printf("\n\nA soma dos números em diagonal da matriz é %i", vsoma);
return 0;
}
