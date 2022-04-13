#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vnum1=0, vnum2=0, vnum3=0;
	printf("Este programa executa uma sequência crescente de três números inteiros!\n");
	system ("pause");
	printf("Insira o primeiro número:\n");
	scanf("%i", &vnum1);
	printf("Insira o segundo número:\n");
	scanf("%i", &vnum2);
	printf("Insira o terceiro número:\n");
	scanf("%i", &vnum3);
	
	if ((vnum1>=vnum2) && (vnum1>=vnum3)){
		if (vnum3>=vnum2){
		printf("A sequência crescente será: %i,%i,%i", vnum2,vnum3,vnum1);
		}
		else{
		printf("A sequência crescente será: %i,%i,%i", vnum3,vnum2,vnum1);
		}
	}
	else{
		if((vnum2>=vnum1) && (vnum2>=vnum3)){
			if (vnum1>=vnum3){
			printf("A sequência crescente será: %i,%i,%i", vnum3,vnum1,vnum2);
			}
			else{
			printf("A sequência crescente será: %i,%i,%i", vnum1,vnum3,vnum2);
			}
		}
		else{
			if(vnum2>vnum1){
			printf("A sequência crescente será: %i,%i,%i", vnum1,vnum2,vnum3);
			}
			else{
			printf("A sequência crescente será: %i,%i,%i", vnum2,vnum1,vnum3);
			}
		}
	}
return (0);
}
