#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float raio=0; 
float altura=0;
float volume=0;	
float pi=3.14;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 7 - Volume de um Cone\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio do Cone:\n");
printf("\n                             ");
scanf("%f" , &raio );
printf("\n\a");
printf("                     Digite a altura do Cone:\n");
printf("\n                             ");
scanf("%f" , &altura );

volume = ((pi * pow(raio,2) * altura)/3);
      

printf("\n");
printf("\n\a");
printf("                     A volume deste cone é:\n\n");
printf("                                %.2f", volume);


return (0);
}



