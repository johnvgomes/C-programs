#include <stdio.h>
#include <locale.h>
#define MAX 10

main () {
	
	int matriz[MAX][MAX];
	int *pMatriz = matriz[0];
	int i;
	int j;
	
	// Inicialização com zero
	
	for (i=0;i<(MAX*MAX);i++){
		
		*(pMatriz+i)=0;
		
	}
	
	// impressão da matriz inicial
	
	printf ("MATRIZ INICIAL \n\n");

	for (i=0;i<MAX;i++) {
		
		for (j=0;j<MAX;j++) {
			
			printf ("%i \t",matriz[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
	// atribuição dos valores desejados
	
	for (int i=0; i<(MAX*MAX);i++) {
		
		*(pMatriz+i)=i+1;
		
	}
	
	printf ("MATRIZ FINAL \n\n");
	
	for (i=0;i<MAX;i++) {
		
		for (j=0;j<MAX;j++) {
			
			printf ("%i \t",matriz[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
}
