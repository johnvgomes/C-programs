#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
int num=0;
int cont=0;
int neg=0;
int posi=0;
int par=0;
int impar=0;


	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("     EXERCICIO 3 - PAR, IMPAR, POSITIVO E NEGATIVO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


do{
	
	
printf("                       Digite um numero\n");

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%i", &num );
   
   if (num>0) {
      posi+=1;
   
   }
   
   if (num<0) {
      neg+=1;
      

   }
   
   if (num%2==0) {
      par +=1;
      
  }

   if (num%2!=0) {
      impar+=1;
   }
   
   cont+=1;
   
   }while (cont <= 4 );
   
   printf("Foram Digitados %i números positivos\n", posi);
   printf("\n");
   printf("Foram Digitados %i números negativos\n", neg);
   printf("\n");
   printf("Foram Digitados %i números pares\n", par);
   printf("\n");
   printf("Foram Digitados %i números impares\n", impar);
   printf("\n");

return(0);
}



