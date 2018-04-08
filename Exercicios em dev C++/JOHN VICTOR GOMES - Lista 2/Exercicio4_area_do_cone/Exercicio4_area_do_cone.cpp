#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float raio=0;
float altura=0;
float area=0;
float pi=3.14;	
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("                Exercicio 4 - Area de um Cone\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio do cone:\n");
printf("\n                             ");
scanf("%f" , &raio );
printf("\n\a");
printf("                     Digite a altura do cone:\n");
printf("\n                             ");
scanf("%f" , &altura );

area = (pi * raio * altura);
      

printf("\n");
printf("\n\a");
printf("                     A área superficial deste cone é:\n\n");
printf("                                %.2f", area);


return (0);
}



