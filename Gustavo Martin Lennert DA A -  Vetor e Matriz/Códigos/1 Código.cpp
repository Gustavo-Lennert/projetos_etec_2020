#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		
		setlocale(LC_ALL, "portuguese");
		int vtnum[10], vsoma=0, vmedia=0;
		printf("Este programa calcula a m�dia e a soma de 10 n�meros inteiros\n\n");
		
		for(int i=0;i<10;i++){
			printf("Entre com um n�mero para a posi��o %i do vetor:", i);
			scanf("%i", &vtnum[i]);
		}
		for(int i=0;i<10;i++){
			vsoma+=vtnum[i];
		}
		vmedia= vsoma/10;
		printf("\n\nA soma dos n�meros � %.i, e a m�dia � %.i\n", vsoma,vmedia);

return 0;
}
