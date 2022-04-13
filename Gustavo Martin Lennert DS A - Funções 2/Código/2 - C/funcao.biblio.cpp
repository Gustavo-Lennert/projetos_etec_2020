#include <stdio.h>
#include "funcao.biblio.h"

float vet_maior( float tam, float *vetor){
	int cont=0;
	for(int i=0;i<tam;i++){
		if(vetor[i]>10){
			cont++;
		}	
	}
	return cont;
}

