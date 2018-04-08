#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{
	

int numero = 0;
int contador = 0;


setlocale(LC_ALL, "Portuguese");
while (1>0){

printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio - 3 Numeros Negativos\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("\n\a");
printf(" \n");
printf(" \n");
printf("         Digite um número: (Digite 0 para finalizar): \n");
printf("\n                             ");
scanf("%i" , &numero );
printf("\n\a");

if (numero == 0) {
       break;
	   }else if (numero<0) {
       contador=contador+1;
       }
       
       
system("cls");

}

system("cls");

printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio - 3 Numeros Negativos\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");

printf ("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
printf ("            Foram digitados %i números negativos\n\n\n", contador);
printf ("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");


return (0);
}



