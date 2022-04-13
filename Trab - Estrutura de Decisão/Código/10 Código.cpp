#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vidade;
	printf("Este programa mostra sua mensalidade do plano de saúde, de acordo com sua idade!\n");
	system ("pause");
	printf("\nInsira sua idade:\n");
	scanf("%i", &vidade);
	
	if (vidade <= 10){
		printf("Sua mensalidade é de R$ 30,00");
	}
	else{
		if(vidade <= 18){
		printf("Sua mensalidade é de R$ 57,00");
		}
		else{
			if (vidade <= 35){
			printf("Sua mensalidade é de R$ 89,00");
			}
			else{
				if (vidade <= 59){
				printf("Sua mensalidade é de R$ 102,00");
				}
				else {
				printf("Sua mensalidade é de R$ 145,00");
				}
			}
		}
	}
return (0);	
}
