#include<stdio.h>

#include <locale.h>



int main ()


{
	
int n1 = 0;




setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 9 - Par ou Impar\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("              Digite um numero:\n");
printf("\n                             ");
scanf("%f" , &n1 );
printf(" \n");
printf(" \n");


   if (n1==0) {
     
         printf("O VALOR DIGITADO � ZERO");

       
         }else if (n1%2==0) {

            printf ("O VALOR DIGITADO � PAR");

         
              }else if (n1%2==1) {
                 printf ("O VALOR DIGITADO � IMPAR");
             }
return (0);
}



