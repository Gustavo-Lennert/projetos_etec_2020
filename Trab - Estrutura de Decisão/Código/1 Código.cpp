#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int senha=0;
	printf("Este programa simula uma segurança de senha ! \n\n");
	system ("pause");
	printf("Insira sua senha: ");
	scanf("%i",&senha);
	if(senha==1223){
		printf("Acesso aceito !");
	}
	else{
		printf("Acesso recusado !");
	}
	return 0;
}
