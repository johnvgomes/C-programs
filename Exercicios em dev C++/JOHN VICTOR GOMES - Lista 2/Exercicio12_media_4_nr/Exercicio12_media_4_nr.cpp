#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	

int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
float media =0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 12 - Media de 4 Numeros\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o primeiro número: \n");
printf("\n                             ");
scanf("%i" , &n1 );
printf("\n\a");
printf("                    Digite o segundo número: \n");
printf("\n                             ");
scanf("%i" , &n2 );
printf("\n\a");
printf("                    Digite o terceiro número: \n");
printf("\n                             ");
scanf("%i" , &n3 );
printf("                    Digite o quarto número: \n");
printf("\n                             ");
scanf("%i" , &n4 );


media = (n1+n2+n3+n4) / 4;

      

printf("\n");
printf("\n\a");
printf("                     A media dos quatro numeros digitados é:\n\n");
printf("                        %.2f", media);


return (0);
}



