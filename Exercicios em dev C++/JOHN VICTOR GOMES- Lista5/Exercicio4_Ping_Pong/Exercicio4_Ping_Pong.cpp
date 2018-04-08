#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
int cod =0;
int pts_P1 =0;
int pts_P2 =0;

	
setlocale(LC_ALL, "Portuguese");

do{
	
	
printf(" --------------------------------------------------------------------------------\n");
printf("                        EXERCICIO 4 - PING PONG SYSTEM\n");
printf(" --------------------------------------------------------------------------------\n");
printf("                            __      ___        __\n");
printf("                           |__|    | & |      |__| \n");
printf("                            ||     |___|       || \n");
printf("                            ''                 ''  \n");
printf("                           PING      &        PONG\n");

printf("\n");
printf("\n");

printf(" |''''''''''''''''''''''''''''|             |'''''''''''''''''''''''''''''''''|\n");
printf(" |         PLAYER 1           |             |             PLAYER 2            |\n");
printf(" |''''''''''''''''''''''''''''|             |'''''''''''''''''''''''''''''''''|\n");
printf(" |             %i              |       X     |                %i                |\n", pts_P1,pts_P2);
printf(" |''''''''''''''''''''''''''''|             |'''''''''''''''''''''''''''''''''|\n");
printf("\n");
printf("\n");
printf("                    Digite o codigo do jogador que pontuou:\n");

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%i", &cod );
   
  
if (cod==1) {

pts_P1 += 1 ; 

system("cls");


}else if (cod==2) {

pts_P2 += 1 ;

system("cls");

}else{


printf("                       o codigo digitado é invalido!!!!\n");
printf("\n");
printf("\n");
printf("\n");


}

system("cls");


   }while (((pts_P1<3)||(pts_P1<pts_P2+2))&&((pts_P2<3)||(pts_P2<pts_P1+2)));
if (pts_P1 > pts_P2) {

printf("                              PLAYER 1 WIN!!!!!\n\n");
                                    
printf("                     ____________________________________\n");
printf("                                   Result:\n");
printf("                           PLAYER 1 %i X %i PLAYER 2\n",pts_P1,pts_P2);
printf("\n");
printf("\n");

} else if (pts_P2 > pts_P1) {

printf("                              PLAYER 2 WIN!!!!!\n\n");
printf("                     ____________________________________\n");
printf("                                   Result:\n");
printf("                           PLAYER 1 %i X %i PLAYER 2\n\n\n",pts_P1,pts_P2);

}

return(0);
}



