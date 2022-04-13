#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Aluno{
	char nome[40];
	int matric;
	struct Ender{
		char rua[40];
		char bairro[30];
		int num;
		char cep[10];
	} endereco;
	float prova1;
	float prova2;
}alunos[5];

int main (){
	setlocale(LC_ALL, "portuguese");
	int soma;
	printf("\nPrograma dados de matr�cula aluno\n");
	
	for(int i=0; i<5; i++){
		printf("\nInsira as informa��es do %i� aluno\n", i+1);
		printf("Nome :");
		scanf(" %s", &alunos[i].nome);
		
		printf("\nMatr�cula do aluno :");
		scanf("%d", &alunos[i].matric);
		getchar();
		
		printf("\nEdere�o do aluno");
		printf("\nRua :");
		scanf(" %s", &alunos[i].endereco.rua);
		
		printf("\nBairro :");
		scanf(" %s", &alunos[i].endereco.bairro);
		
		printf("\nN�mero :");
		scanf("%d", &alunos[i].endereco.num);
		getchar();
		
		printf("\nCEP :");
		scanf(" %s", &alunos[i].endereco.cep);
		
		printf("\nNotas");
		printf("\nProva 1 :");
		scanf("%f", &alunos[i].prova1);
		
		printf("\nProva 2 :");
		scanf("%f", &alunos[i].prova2);
		getchar();
	}

	for(int i=0; i<5; i++){
		printf("\nMatr�cula\tNome\t\tM�dia\n");
		printf("%d\t\t%s\t\t%1.2f\n", alunos[i].matric,alunos[i].nome,
		(alunos[i].prova1 + alunos[i].prova2)/2);
		printf("\nSitua��o:\n");
		soma=(alunos[i].prova1 + alunos[i].prova2)/2;
		if(soma>=7){
			printf("Aprovado !\n\n");
		}
		else{
			printf("Reprovado !\n\n");
		}	
	}
return 0;
}
