#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float vsalar=0, vabono=0;
	int vanos=0;
	printf("Este programa executa a função de calcular o salário de um funcionário, com um acréscimo de um abono \n\n");
	system ("pause");
	printf("Insira o valor do salário do funcionário \n");
	scanf("%f", &vsalar);
	printf("Insira a qauntidade de anos trabalhadas \n");
	scanf("%f", &vanos);
	
	if((vsalar>1000) && (vanos>=5)){
			vabono=0.05*vsalar;
	}
	else{
		vabono=0.02*vsalar;;
	}
	
	vsalar=vsalar+vabono;
	printf("O valor do abono salarial é %.2f\n", vabono);
	printf("E o valor do salário total é de %.2f\n", vsalar);
	
return 0;	

}
