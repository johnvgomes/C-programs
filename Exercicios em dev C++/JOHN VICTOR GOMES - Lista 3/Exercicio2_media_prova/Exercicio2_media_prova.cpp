#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float prova1 = 0;
float prova2 = 0;

float media = 0 ;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("     Exercicio 2 - Media Aritmetica da Avaliação\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite a nota da primeira prova: \n");
printf("\n                             ");
scanf("%f" , &prova1 );
printf("\n\a");
printf("               Digite a nota da segunda prova: \n");
printf("\n                             ");
scanf("%f" , &prova2 );
printf(" \n");
printf(" \n");

media = ((prova1 + prova2) /2 );

             
	
	
printf(" \n");
printf(" \n");

printf("                    %.2f + %.2f = %.2f",prova1, prova2, media);
        
return (0);
}



