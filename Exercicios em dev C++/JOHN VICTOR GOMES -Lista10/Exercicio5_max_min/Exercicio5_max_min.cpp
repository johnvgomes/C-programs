#include <stdio.h>
#define MAX 20


void mm(int *vetor);
int vetor[MAX]; 
int *pVetor = vetor;
int i;
int aux;


int main (){



mm(pVetor);

return(0);

}

void mm(int *vetor){
	
int maximo; 
int minimo;
			
	for (int i=0; i<(MAX*MAX);i++) {
		
		*(pVetor+i)=i+1;
		
		
	}
	
		//ordenação bolha
	
	for (i=0;i<MAX-1;i++) {
		
				
			if (*(pVetor+i)>*(pVetor+i+1)) {
				
				aux= *(pVetor+i);
				*(pVetor+i)=*(pVetor+i+1);
				*(pVetor+i+1)=aux;
				
						
		}
		
	}
	
		printf ("VETOR \n\n");
	
	for (i=0;i<MAX;i++) {
		
			
			printf ("%i \t",*pVetor+i);
	
	
	
}

		i=0;
		
		
		
		minimo = *pVetor+i;

		maximo = *pVetor+MAX-1;
	
		
		printf ("\n");
		
		printf ("\n");
		
		printf ("\n");
		
		printf ("\n");
		printf("O valor maximo %i", maximo);
		
		
		printf ("\n");
		printf("O valor minimo %i", minimo);
	}
