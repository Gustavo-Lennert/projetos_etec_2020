#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vcodigo;
	printf("Este programa apresenta a regi�o de origem de um produto\n");
	system ("pause");
	printf("Insira o c�digo do seu produto:\n");
	scanf("%i", &vcodigo);
	
	switch (vcodigo){
		case 1:
			printf("O produto se origina do Sul");
			break;	
		case 2: 
			printf("O produto se origina do Sudeste");
			break;	
		case 3:
			printf("O produto se origina do Centro-Oeste");
			break;		
		case 4:
			printf("O produto se origina do Nordeste");
			break;	
		case 5:
			printf("O produto se origina do Norte");
			break;
		default:
			printf("O produto � improtado");
			break;					
	}
	printf("\n� n�is!");
	return (0);
}	
