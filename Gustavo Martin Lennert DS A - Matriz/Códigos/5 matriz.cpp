#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
			
	setlocale(LC_ALL, "portuguese");
	int mat[5][5]={0}, vmaior=0, vmenor=0;
	printf("Programa matriz 5x5, apresenta��o do maior e menor n�mero\n\n");
	for(int l=0;l<5;l++){
		for(int c=0;c<5;c++){	
		printf("Entre com um n�mero inteiro para a linnha %i e a coluna %i da matriz:", l,c);
		scanf("%i", &mat[l][c]);
		}
	}
	vmaior=mat[0][0];
	vmenor=mat[0][0];
	for (int l=0;l<5;l++){
       for(int c=0;c<5;c++){
        	printf(" %i",mat[l][c]);
        	
        	if(mat[l][c]>vmaior){
			vmaior=mat[l][c]; 
			}
			if(mat[l][c]<vmenor){
			vmenor=mat[l][c]; 
			}
		}
    	printf("\n");
     }
     
	printf("\n\nO maior n�mero da matriz � %i, e o menor � %i", vmaior, vmenor);
return 0;
}
