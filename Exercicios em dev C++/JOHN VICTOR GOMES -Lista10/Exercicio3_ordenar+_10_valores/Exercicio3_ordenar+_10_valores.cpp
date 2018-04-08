#include <stdio.h>
#define MAX 10



int main (){

int vetor[MAX]; 
int *pVetor = vetor;
int i;
int j;
int aux;

//recebimento dos valores 
for (i=0; i<MAX;i++){
	
	printf("Entre com um numero para a posicao %i: \n", (i+1));
	scanf("%i", (pVetor+i));
}
//ordenação bolha
for (i=0;i<MAX-1;i++){
	for (j=0;j<MAX-1;j++){
	
	if (*(pVetor+j)>*(pVetor+j+1)){
		
		aux= *(pVetor+j);
		*(pVetor+j)=*(pVetor+j+1);
		*(pVetor+j+1)=aux;
	}
}
}

//impressao dos valores ordenados
printf("Vetor ordenado\n");
for (i=0;i<MAX;i++){
	printf("%i\n",*(pVetor+i));
	
}


return(0);
}
