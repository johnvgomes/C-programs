#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float raio=0;
float volume=0;	
float pi=3.14;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 6 - Volume de uma Esfera\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio da Esfera:\n");
printf("\n                             ");
scanf("%f" , &raio );

volume = (4/3 * pi * pow(raio,3));
      

printf("\n");
printf("\n\a");
printf("                     A volume desta esfera é:\n\n");
printf("                                %.2f", volume);


return (0);
}



