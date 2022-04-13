#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Produto{
	int codigo;
	char desc[40];
	int estoque;
	int minimo;
}produtos[5];

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("\nPrograma contagem de estoque\n\n");
	
	for(int i=0; i<5; i++){
		printf("\nInsira as informações do %iº produto\n", i+1);
		printf("Código :");
		scanf("%d", &produtos[i].codigo);
		getchar();
		printf("\nDescrição :");
		scanf(" %s", &produtos[i].desc);
		printf("\nValor em estoque :");
		scanf("%d", &produtos[i].estoque);
		printf("\nEstoque mínimo:");
		scanf("%d", &produtos[i].minimo);
	}
	
	printf("\n\nTabela de produtos\n\n");
	printf("\nCódigo\t\tDescrição\tQtd em estoque\t\tEstoque mínimo\n");
	for(int i=0; i<5; i++){
	printf("%d\t\t%s\t\t\t%d\t\t\t%d\n",produtos[i].codigo,produtos[i].desc,
 produtos[i].estoque,produtos[i].minimo);
	}	
	printf("\n\nProdutos com estoque igual ou abaixo ao estoque mínimo ");
	for(int i=0; i<5; i++){
		if(produtos[i].estoque<=produtos[i].minimo){
			printf("\n%s", produtos[i].desc);	
		}
	}
return 0;
}
	
