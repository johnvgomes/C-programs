#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float fahrenheit=0;
float celsius=0;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("         Exercicio 8 - Conversor de Temperatura\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("        Digite o valor da temperatura em Fahrenheit:\n");
printf("\n                             ");
scanf("%f" , &fahrenheit );

celsius = ((fahrenheit - 32) /1.8);
      

printf("\n");
printf("\n\a");
printf("         A temperatura digitada equivale a %.2f ºC\n\n", celsius);



return (0);
}



