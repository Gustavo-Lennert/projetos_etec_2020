#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vnum=0, vresto=0;
	printf("Este programa calcula se um número inteiro é ímpar ou par!\n");
	system ("pause");
	printf("\nInsira um número:\n");
	scanf("%i", &vnum);
	
	vresto=(vnum%2);
	if (vresto==0){
		printf("O número %i é par", vnum);
	}
	else{
		printf("O número %i é ímpar", vnum);
	}
return (0);
}
