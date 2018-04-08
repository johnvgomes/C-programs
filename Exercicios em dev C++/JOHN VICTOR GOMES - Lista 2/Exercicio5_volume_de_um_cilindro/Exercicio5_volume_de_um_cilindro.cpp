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
printf("           Exercicio 5 - Volume de um  Cilindro\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio do cilindro:\n");
printf("\n                             ");
scanf("%f" , &raio );
printf("\n\a");
printf("                     Digite a altura do cone:\n");
printf("\n                             ");
scanf("%f" , &altura );

volume = (pi* pow (raio,2) * altura);
      

printf("\n");
printf("\n\a");
printf("                     A volume deste cilindro é:\n\n");
printf("                                %.2f", volume);


return (0);
}



