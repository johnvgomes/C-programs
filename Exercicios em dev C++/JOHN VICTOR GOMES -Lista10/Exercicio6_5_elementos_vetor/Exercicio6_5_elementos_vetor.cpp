#include <stdio.h>
#include <locale.h>

main () {
	
	int vetor[3]={1,2,3};
	int *pVetor = vetor;
	int i;
	
	for (i=0;i<3;i++) {
		
		printf ("Digite um valor para a posição %i do vetor \n", (i+1));
		scanf ("%i",(pVetor+1));
		
	}
	
	/* O que está sendo feito...
	for (i=0;i<3;i++) {
	
		vetor[i]=*(pVetor+i);
		
	}*/
	
	for (i=0;i<3;i++) {
		
		printf ("Valor %i \n", vetor[i]);
		
	}
	
}
