#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	

float n1=0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("     Exercicio 1 - Positivo X Negativo  X ZERO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite um n�mero: \n");
printf("\n                             ");
scanf("%f" , &n1 );
printf(" \n");
printf(" \n");

if (n1 > 0) {
        
printf("               O n�mero %.2f � positivo" ,n1);
           
}else if (n1<0) {

printf("               O n�mero %.2f � negativo" ,n1);
             
             
}else{
             
printf ("              O numero digitado � zero");

             
	}
	
printf(" \n");
printf(" \n");
        
return (0);
}



