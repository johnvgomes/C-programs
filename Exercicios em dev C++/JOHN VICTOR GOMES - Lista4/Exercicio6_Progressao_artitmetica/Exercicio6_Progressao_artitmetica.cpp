#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{

int n =0;
float a1=0;
float an =0;
float num_termos =1;
float termo =0;
float soma =0;
float r  =0;


setlocale(LC_ALL, "Portuguese");

printf(" \n");
printf("----------------------------------------------------------\n");
printf("          EXERCICIO 6 - PROGRESSAO ARITMETICA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("\n\a");
printf(" \n");
printf(" \n");
printf("         Digite o numero de termos da P.A.: \n");
printf("\n                         ");
scanf("%i" , &n );
printf("\n\a");
printf(" \n");
printf(" \n");
printf("         Digite o primeiro termo da P.A.: \n");
printf("\n                         ");
scanf("%f" , &a1 );
printf("\n\a");
printf(" \n");
printf(" \n");
printf("             Digite a razao da P.A.: \n");
printf("\n                        ");
scanf("%f" , &r );
printf("\n\a");
  

system("cls");

printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("          EXERCICIO 6 - PROGRESSAO ARITMETICA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");

printf("                   A PROGRESSAO ARITMETICA É\n");
printf("\n");

printf("               ( ");

while (num_termos < n) {


if (num_termos==1) {

 num_termos +=1;
   an=a1;
   printf(" %.0f ,",a1);
   
}else if (num_termos!=1){


num_termos +=1;

an = an+r;

   printf(" %.0f ,",an);
}
}

if (num_termos == n) {

num_termos +=1;

an = (an+r);

printf(" %.0f",an);

}

soma = (((a1+an)*n)/2);
printf(" ) = %.0f",soma);

printf("\n");
printf("\n");

return (0);


}




