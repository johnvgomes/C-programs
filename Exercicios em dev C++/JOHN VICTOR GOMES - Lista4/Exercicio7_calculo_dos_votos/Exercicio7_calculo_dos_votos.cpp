#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{

int opc =0;
int votos_candidato1 =0;
int votos_candidato2 =0;
int votos_candidato3 =0;
int votos_candidato4 =0;
int votos_nulo =0;
int votos_branco =0;
int contador = 0;

setlocale(LC_ALL, "Portuguese");



while (1>0) {

contador += 1;


printf(" \n");
printf("----------------------------------------------------------\n");
printf("                    EXERCICIO 7 - CALCULO DE VOTOS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("                 SEJA BEM VINDO AS ELEIÇOES DE 2016\n");
printf("              POR FALTA DE VERBA SÓ TEMOS 4 CANDIDATOS\n");
printf("                             SÃO ELES:\n");

printf("                       1- Zé Arlindo Peregrino\n");
printf("                       2- João Maria\n");
printf("                       3- Tio da Pamonha\n");
printf("                       4- Roni Uisley 'Leviosaahn'\n");
printf("\n");
printf("-----------------------------OUTROS----------------------------\n");
printf("\n");
printf("                       5- NULO\n");
printf("                       6- BRANCO\n");

printf("\n");
printf("\n");

printf("         PARA VOTAR SELECIONE UM CANDIDATO E DIGITE SEU CODIGO\n");
printf("                      PARA FINALIZAR APERTE 0\n");

printf("\n");
printf("\n");

printf("\n                         ");
scanf("%i", &opc );
printf("\n\a");
printf(" \n");



printf("\n");
printf("\n");

 if (opc==0) {

break;

     system("cls");
     printf("\n");
     printf("\n");


     } else if (opc==1) {
     
     votos_candidato1 +=1 ;
     
     system("cls");
     printf("\n");
     printf("\n");
     
     

     } else if (opc==2) {

     votos_candidato2 +=1 ;
     
     system("cls");
     printf("\n");
     printf("\n");
     
     
     
     } else if (opc==3) {

     votos_candidato3 +=1 ;
     
     system("cls");
     printf("\n");
     printf("\n");
     
     
     
     } else if (opc==4) {

     votos_candidato4 +=1 ;
     
     system("cls");
     printf("\n");
     printf("\n");
     
     
     
     } else if (opc==5) {

     votos_nulo +=1 ;

     system("cls");
     printf("\n");
     printf("\n");
     
     
     
     } else if (opc==6) {
     
     votos_branco +=1 ;

     system("cls");
     printf("\n");
     printf("\n");

     }else{
     
     
     printf("  O Numero Digitado não corresponde a nenhum candidato\n");
     printf("     Por favor, só vote novamente quando alfabetizado\n\n ");



     }
     
     system("cls");
     printf("\n");
     printf("\n");
 }
     
     printf("              O resultado das votações foi o seguinte: \n");
     printf("\n");
     printf("\n");
     printf("       -----------------------------------------------------\n");
     printf("       |      ZÉ    |    JOÃO    |  T.PAMONHA  |    RONY    |\n");
     printf("       -----------------------------------------------------\n");
     printf("       |  %i voto(s)|  %i voto(s)|  %i voto(s) |  %i voto(s)|\n", votos_candidato1, votos_candidato2,votos_candidato3,votos_candidato4);
     printf("       -----------------------------------------------------\n");
     printf("\n");
     printf("\n");
     printf("       ________________________OUTROS_________________________\n");
     printf("\n");
     printf("\n");
     printf("                    ----------------------------\n");
     printf("                    |    NULO    |    BRANCO   |\n");
     printf("                    ----------------------------\n");
     printf("                    |  %i voto(s)|  %i voto(s) | \n", votos_nulo,votos_branco);
     
     return(0);
} 




