#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vnum=0, vresto=0;
	printf("Este programa calcula se um n�mero inteiro � �mpar ou par!\n");
	system ("pause");
	printf("\nInsira um n�mero:\n");
	scanf("%i", &vnum);
	
	vresto=(vnum%2);
	if (vresto==0){
		printf("O n�mero %i � par", vnum);
	}
	else{
		printf("O n�mero %i � �mpar", vnum);
	}
return (0);
}
