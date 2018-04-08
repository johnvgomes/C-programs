#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	

int num = 100;


	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("            Exercicio 2 - Valor Decrescente\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

do{
   
   
   printf("%i \n", num);
   num-=5;
   
   }while (num >= (-100));
   

return(0);
}



