#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main ()


{

char nome_Time_A[100] ="";
int Gols_Time_A =0;
char nome_Time_B[100] ="";
int Gols_Time_B =0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 10 - Placar times de Futebol\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("              Digite o nome do Time - A:\n");
printf("\n                             ");
scanf("%s" , &nome_Time_A );
printf("              Digite o nome do Time - B:\n");
printf("\n                             ");
scanf("%s" , &nome_Time_B );
printf("               Quantos gols o %s marcou nesta partida?:\n", nome_Time_A);
printf("\n                             ");
scanf("%i" , &Gols_Time_A );
printf("              Quantos gols o %s marcou nesta partida?:\n" , nome_Time_B);
printf("\n                             ");
scanf("%i" , &Gols_Time_B );
printf(" \n");
printf(" \n");

system("cls"); 

printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");


   
if (Gols_Time_A > Gols_Time_B) {

               printf ("              O PLACAR DA PARTIDA FOI:\n\n");

               printf("======================================================\n");
               printf("                %s | %i | -X- | %i | %s          \n",nome_Time_A, Gols_Time_A , Gols_Time_B ,nome_Time_B);
               printf("======================================================\n");

               printf("\n");
               printf("\n");
               printf("                          ...\n");
               printf("\n");
               printf("\n");

               printf("*******************************************************\n");
               printf("               %s é o vencedor!!!\n",nome_Time_A);
               printf("*******************************************************\n");
               
           
               }else if(Gols_Time_B > Gols_Time_A) {

               printf ("              O PLACAR DA PARTIDA FOI:\n\n");
     
               printf("======================================================\n");
               printf("                %s | %i | -X- | %i | %s          \n",nome_Time_A, Gols_Time_A , Gols_Time_B ,nome_Time_B);
               printf("======================================================\n");

               printf("\n");
               printf("\n");
               printf("                          ...\n");
               printf("\n");
               printf("\n");

               printf("*******************************************************\n");
               printf("               %s é o vencedor!!!\n",nome_Time_B);
               printf("*******************************************************\n");

             

               }else if(Gols_Time_A == Gols_Time_B) {

               printf ("              O PLACAR DA PARTIDA FOI:\n\n");

               printf("======================================================\n");
               printf("                %s | %i | -X- | %i | %s          \n",nome_Time_A, Gols_Time_A , Gols_Time_B ,nome_Time_B);
               printf("======================================================\n");

               printf("\n");
               printf("\n");
               printf("                          ...\n");
               printf("\n");
               printf("\n");

               printf("*******************************************************\n");
               printf("             A partida terminou em EMPATE!!!\n");
               printf("*******************************************************\n");
           }
		   
printf("\n");
printf("\n");


return (0);
}



