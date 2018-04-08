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
     
         printf("O VALOR DIGITADO É ZERO");

       
         }else if (n1%2==0) {

            printf ("O VALOR DIGITADO É PAR");

         
              }else if (n1%2==1) {
                 printf ("O VALOR DIGITADO É IMPAR");
             }
return (0);
}



