#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	

int cont = 0;
int soma=0;

	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("    Exercicio 1 - Soma 100 primeiros numeros naturais\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

do{
   
   soma+=cont;
   cont++;
   //printf("%i \n", cont);
   
   }while (cont<=100);
   
printf("\n");
printf("\n\a");
printf("   A soma dos 100 primeiros números naturais é: %i \n\n", soma);

return(0);
}



