#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float money(float salarf, float reajf){
	float total=0, soma=0;
	total= (salarf*(reajf/100));
	soma= (salarf + total);
	return soma;	
	}

int main(){
	setlocale(LC_ALL,"portuguese");
	float salar=0, reaj=0;
	
	printf("\n\Calculo sal�rio com percentual de reajuste \n\n");
	printf("Insir� o sal�rio do funcion�rio:");
	scanf("%f", &salar);
	printf("\nInsir� o valor do reajuste salarial:");
	scanf("%f", &reaj);
	
	printf("\n\nO sal�rio final ser�: %1.2f", money(salar,reaj));

return 0;
}
