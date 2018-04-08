#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main ()


{
	
int n1=0;
int n2=0;
int soma=0;	
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("                Exemplo 1 - Soma dos valores\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Escreva um número:\n");
printf("\n                             ");
scanf("%i" , &n1 );
printf("\n\a");
printf("                     Escreva outro número:\n");
printf("\n                             ");
scanf("%i" , &n2 );

soma = n1+n2;
printf("\n");
printf("\n\a");
printf("                     A soma dos valores %i e %i é %i \n \n", n1, n2, soma);



return (0);
}



