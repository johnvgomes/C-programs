#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float raio=0;
float area=0;
float pi=3.14;	
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("      Exercicio 3 - Area Superficial de uma Esfera\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio da esfera:\n");
printf("\n                             ");
scanf("%f" , &raio );

area = (4 * pi * pow(raio,2));
      

printf("\n");
printf("\n\a");
printf("                     A área superficial desta esfera é:\n\n");
printf("                                %.2f", area);


return (0);
}



