#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	

int cont=0;

int canal=0;
float cn4 =0;
float cn5 =0;
float cn7 =0;
float cn12=0;

int pessoas=0;
int PACN4 =0;  //Pessoas assistino o canal 4
int PACN5 =0;
int PACN7=0;
int PACN12=0;

float porc_PACN4=0;
float porc_PACN5=0;
float porc_PACN7=0;
float porc_PACN12=0;

float geral=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");


for (;;){
	
printf("----------------------------------------------------------\n");
printf("                 EXERCICIO 6 - TELEVISAO\n");
printf("----------------------------------------------------------\n");
printf("\n\n\a");

printf("____________________________________________________________\n");
   printf("                 Escolha um dos canais listados abaixo\n");
   printf("_________________________________________________________\n");
   printf("\n");
   printf("                          (4) - CANAL 4\n");
   printf("\n");
   printf("                          (5) - CANAL 5\n");
   printf("\n");
   printf("                          (7) - CANAL 7\n");
   printf("\n");
   printf("                         (12) - CANAL 12\n");
   printf("\n");
   printf("------------------------------------------------------------\n");
   printf("                               OUTROS\n");
   printf("------------------------------------------------------------\n");
   printf("\n");
   printf("                          (1) - TV DESLIGADA\n");
   printf("\n");
   printf("                          (0) - SAIR\n");
   printf("\n");
   printf("-------------------------------------------------------------\n");
   printf("\n");
   printf("\n                                   ");
   scanf ("%i", &canal);

   if (canal == 0) {
     break;
   }

   if (canal == 1) {
      printf ("               Esta casa nao entrou na pesquisa.");
   }else if (canal == 4) {

         system("cls");

         printf("  -------------------------------------------------------------------------\n");
         printf("                       EXERCICIO 6 - TELEVISAO\n");
         printf("  -------------------------------------------------------------------------\n");

         printf("\n");
         printf("\n");
         printf("\n");

         printf ("      Digite o número de pessoas assistindo ao canal %i\n", canal);

         printf("\n");
         printf("\n");

         printf("\n                              ");
         scanf ("%i", &pessoas);

         cn4 += 1;
         PACN4 += pessoas;
         geral += pessoas;

      }else if (canal == 5) {

         system("cls");

         printf("  -------------------------------------------------------------------------\n");
         printf("                       EXERCICIO 6 - TELEVISAO\n");
         printf("  -------------------------------------------------------------------------\n");

         printf("\n");
         printf("\n");
         printf("\n");

         printf ("      Digite o número de pessoas assistindo ao canal %i\n", canal);

         printf("\n");
         printf("\n");

         printf("\n                              ");
         scanf ("%i", &pessoas);

         cn5 += 1;
         PACN5 += pessoas;
         geral += pessoas;

         }else if (canal == 7) {

         system("cls");

         printf("  -------------------------------------------------------------------------\n");
         printf("                       EXERCICIO 6 - TELEVISAO\n");
         printf("  -------------------------------------------------------------------------\n");

         printf("\n");
         printf("\n");
         printf("\n");

         printf ("      Digite o número de pessoas assistindo ao canal %i\n", canal);

         printf("\n");
         printf("\n");

         printf("\n                              ");
         scanf ("%i", &pessoas);

         cn7 += 1;
         PACN7 += pessoas;
         geral += pessoas;
         
            }else if (canal == 12) {

         system("cls");

         printf("  -------------------------------------------------------------------------\n");
         printf("                       EXERCICIO 6 - TELEVISAO\n");
         printf("  -------------------------------------------------------------------------\n");

         printf("\n");
         printf("\n");
         printf("\n");

         printf ("      Digite o número de pessoas assistindo ao canal %i\n", canal);

         printf("\n");
         printf("\n");

         printf("\n                              ");
         scanf ("%i", &pessoas);

         cn12 += 1;
         PACN12 += pessoas;
         geral += pessoas;
         
     }
         
   system("cls");
}
system("cls");


printf("===========================================================================\n");
printf ("                       Porcentagens de audiência:\n");
printf("===========================================================================\n");

if (PACN4 == 0) {
   printf ("                       Canal 4 : Sem audiência.\n");
   printf("\n");
}else{
  porc_PACN4 = ((PACN4*100)/geral);
   printf ("                       Canal 4 : %.2f %%\n", porc_PACN4);
   printf("\n");
}
if (PACN5 == 0) {
   printf ("                       Canal 5 : Sem audiência.\n");
   printf("\n");
}else{
  porc_PACN5 = ((PACN5*100)/geral);
   printf ("                       Canal 5 : %.2f %%\n", porc_PACN5);
   printf("\n");
}
if (PACN7 == 0) {
   printf ("                       Canal 7 : Sem audiência.\n");
   printf("\n");
}else{
  porc_PACN7 = ((PACN7*100)/geral);
   printf ("                       Canal 7 : %.2f %%\n", porc_PACN7);
   printf("\n");
}
if (PACN12 == 0) {
   printf ("                       Canal 12 : Sem audiência.\n");
   printf("\n");
}else{
  porc_PACN12 = ((PACN12*100)/geral);
   printf ("                       Canal 12 : %.2f %%\n", porc_PACN12);
   printf("\n");

}
  
return (0);


}



