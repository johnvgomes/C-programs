#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{
int n1 =0;
int contador =0;
float soma_par =0;
float Media_par =0;
float cont_par =0;

setlocale(LC_ALL, "Portuguese");



while (1>0) {

contador += 1;

printf("-------------------------------------------------------------------\n");
printf("                  EXERCICIO 9 - MEDIA DOS NUMEROS PARES\n");
printf("-------------------------------------------------------------------\n");

printf("\n");
printf("\n");

printf("                       Digite um numero\n");
printf("                    Para finalizar digite 0.\n");

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%i", &n1 );

if (n1 == 0) {

break;

}

if (n1%2==0) {
 
 soma_par += n1;
 cont_par +=1;
 }
 
system("cls");
}
system("cls");

printf("\n");
printf("\n");

Media_par = (soma_par/cont_par);

printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");


printf("                     A Media dos numeros pares digitados é:\n");
printf("                                 %.2f \n\n", Media_par);

printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");

     return(0);
} 




