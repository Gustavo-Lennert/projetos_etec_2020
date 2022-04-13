#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vdiasem;
	printf("Este programa apresenta os dias da semana !\n");
	system ("pause\n\n");
	printf("Insira o número do dia da semana:\n");
	scanf("%i", &vdiasem);
	
	switch (vdiasem){
		
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-Feira");
			break;	
		case 3: 
			printf("Terça-Feira");
			break;	
		case 4:
			printf("Quarta-Feira");
			break;		
		case 5:
			printf("Quinta-Feira");
			break;	
		case 6:
			printf("Sexta-Feira");
			break;
		case 7:
			printf("Sábado");
			break;
		default:
			printf("O dia da semana é inválido");								
	}
	printf("\nÉ nóis!");
	return (0);
}	
