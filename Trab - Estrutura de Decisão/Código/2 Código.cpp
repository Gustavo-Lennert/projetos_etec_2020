#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int vnum1=0,vnum2=0;
	printf("Este programafaz a diferenciação de maior, menor e igual entre dois números! \n\n");
	system ("pause");
	printf("\n Insira o primeiro número: ");
	scanf("%i", &vnum1);
	printf("\n Insira o segundo número: ");
	scanf("%i", &vnum2);
	
	if(vnum1==vnum2){
		printf("\n\nOs dois números são iguais");
	}
	else{
		if(vnum1>vnum2){
		printf("\n\n O valor de %i é maior que %i" ,vnum1,vnum2);
		}
		else{
		printf("\n O valor de %i é maior que %i " ,vnum2, vnum1);
		}
	}
	return 0;
}
