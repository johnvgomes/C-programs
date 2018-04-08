#include <stdio.h>
#include <locale.h>

void troca (float *a, float *b);
float a;
float *pA=&a;
float b;
float *pB=&b;

main () {
	setlocale(LC_ALL,"portuguese");
	
	printf ("Digite um valor para a variável A: \n");
	scanf ("%f",pA);
	
	printf ("Digite um valor para a variável B: \n");
	scanf ("%f",pB);	
	
	printf ("Valor A: %.2f \n", *pA);
	printf ("Valor B: %.2f \n", *pB);
	
	troca (pA,pB);
	
	printf ("Os valores trocados ficaram A: %.2f e B: %.2f \n",*pA,*pB);
	
}

void troca (float *a, float *b) {

	float aux;
	
	printf ("\n entrou \n");
	printf ("Valor A: %.2f \n", *a);
	printf ("Valor B: %.2f \n", *b);
	
	printf ("\n Valores nos ponteiros \n");
	printf ("Valor A: %.2f \n", *pA);
	printf ("Valor B: %.2f \n", *pB);
	
	aux=*a;
	*a=*b;
	*b=aux;
	
}
