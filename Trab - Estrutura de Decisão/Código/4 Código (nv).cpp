#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float vcompra=0, vprecof=0, vpercent=0, vparcelfim=0;
	int vparcela=0;
	printf("Este programa realiza a função de calcular o valor de uma compra parcelada, contando com possiveis reajustes e descontos\n");
	system ("pause");
	printf("Insira o valor da compra\n");
	scanf("%f", &vcompra);
	printf("Insira a quantidade de parcelas\n");
	scanf("%i", &vparcela);
	
	switch (vparcela){
		case 1:
			vpercent = vcompra*0.05;
			vprecof = vcompra-vpercent;
			break;	
		case 2:
			vpercent=vcompra*0.03;
			vprecof= vcompra+vpercent;
			break;	
		case 3:
			vpercent=vcompra*0.05;
			vprecof= vcompra+vpercent;
			break;
		default:
			vpercent=vcompra*0.10;
			vprecof= vcompra+vpercent;
			break;	
	}
	
	vparcelfim=vprecof/vparcela;
	printf("O valor da compra final será de %.2f\n", vprecof);
	printf("O valor parcelado será de %.2f\n", vparcelfim);

	return(0);

}
