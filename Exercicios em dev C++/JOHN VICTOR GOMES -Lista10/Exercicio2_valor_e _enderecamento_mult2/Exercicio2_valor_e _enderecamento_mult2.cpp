#include <stdio.h>
#define MAX 5



int main (){

int vetor[MAX]={1,2,3}; 
int *pVetor = vetor;
int i;

for (i=0; i<3; i++){
	*pVetor *=2;
	printf ("Valor %i - Endereço na memoria %p\n",*pVetor, pVetor );
	pVetor++;
}
return(0);
}
