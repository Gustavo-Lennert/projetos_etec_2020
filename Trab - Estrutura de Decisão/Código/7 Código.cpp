#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	float vnota1=0, vnota2=0, vnota3=0, vmedia=0, vpercent=0;
	int vfalta=0;
	
	printf("Este programa calcula o conceito final de um aluno!\n");
	system ("pause");
	printf("\n\nInsira a primeira nota:\n");
	scanf("%f", &vnota1);
	printf("Insira o segunda nota:\n");
	scanf("%f", &vnota2);
	printf("Insira o terceira nota:\n");
	scanf("%f", &vnota3);
	printf("Insira a quantidade de faltas:\n");
	scanf("%i", &vfalta);
	
	vpercent=((vfalta*100)/80);
	if (vpercent<=25){
		vmedia=((vnota1+vnota2+vnota3)/3);
			if (vmedia>=7){
				printf("Aluno aprovado!");
			}
			else{
			printf("Aluno reprovado por média!");
			}
	}
	else{
		printf("Aluno reprovado por faltas!");
	}

return (0);	
}
