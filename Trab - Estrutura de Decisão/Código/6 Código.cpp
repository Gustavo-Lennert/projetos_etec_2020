#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vnum1=0, vnum2=0, vnum3=0;
	printf("Este programa executa uma sequ�ncia crescente de tr�s n�meros inteiros!\n");
	system ("pause");
	printf("Insira o primeiro n�mero:\n");
	scanf("%i", &vnum1);
	printf("Insira o segundo n�mero:\n");
	scanf("%i", &vnum2);
	printf("Insira o terceiro n�mero:\n");
	scanf("%i", &vnum3);
	
	if ((vnum1>=vnum2) && (vnum1>=vnum3)){
		if (vnum3>=vnum2){
		printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum2,vnum3,vnum1);
		}
		else{
		printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum3,vnum2,vnum1);
		}
	}
	else{
		if((vnum2>=vnum1) && (vnum2>=vnum3)){
			if (vnum1>=vnum3){
			printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum3,vnum1,vnum2);
			}
			else{
			printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum1,vnum3,vnum2);
			}
		}
		else{
			if(vnum2>vnum1){
			printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum1,vnum2,vnum3);
			}
			else{
			printf("A sequ�ncia crescente ser�: %i,%i,%i", vnum2,vnum1,vnum3);
			}
		}
	}
return (0);
}
