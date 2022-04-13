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
	
	printf("\n\Calculo salário com percentual de reajuste \n\n");
	printf("Insirá o salário do funcionário:");
	scanf("%f", &salar);
	printf("\nInsirá o valor do reajuste salarial:");
	scanf("%f", &reaj);
	
	printf("\n\nO salário final será: %1.2f", money(salar,reaj));

return 0;
}
