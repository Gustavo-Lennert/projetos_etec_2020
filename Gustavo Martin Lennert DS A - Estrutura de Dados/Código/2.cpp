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
		printf("\nInsira as informa��es do %i� produto\n", i+1);
		printf("C�digo :");
		scanf("%d", &produtos[i].codigo);
		getchar();
		printf("\nDescri��o :");
		scanf(" %s", &produtos[i].desc);
		printf("\nValor em estoque :");
		scanf("%d", &produtos[i].estoque);
		printf("\nEstoque m�nimo:");
		scanf("%d", &produtos[i].minimo);
	}
	
	printf("\n\nTabela de produtos\n\n");
	printf("\nC�digo\t\tDescri��o\tQtd em estoque\t\tEstoque m�nimo\n");
	for(int i=0; i<5; i++){
	printf("%d\t\t%s\t\t\t%d\t\t\t%d\n",produtos[i].codigo,produtos[i].desc,
 produtos[i].estoque,produtos[i].minimo);
	}	
	printf("\n\nProdutos com estoque igual ou abaixo ao estoque m�nimo ");
	for(int i=0; i<5; i++){
		if(produtos[i].estoque<=produtos[i].minimo){
			printf("\n%s", produtos[i].desc);	
		}
	}
return 0;
}
	
