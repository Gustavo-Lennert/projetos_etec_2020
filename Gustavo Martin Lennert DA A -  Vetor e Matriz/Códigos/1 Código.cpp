#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vsoma=0, vmedia=0;
		printf("Este programa calcula a média e a soma de 10 números inteiros\n\n");
		
		for(int i=0;i<10;i++){
			printf("Entre com um número para a posição %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		for(int i=0;i<10;i++){
			vsoma+=vtnum[i];
		}
		vmedia= vsoma/10;
		printf("\n\nA soma dos números é %.i, e a média é %.i\n", vsoma,vmedia);

return 0;
}
