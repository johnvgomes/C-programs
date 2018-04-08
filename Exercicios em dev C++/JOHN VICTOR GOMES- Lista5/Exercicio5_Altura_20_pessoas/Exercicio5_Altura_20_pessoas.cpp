#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
float altura =0;
int contador =0;

float altura_maior =0;
float soma_altura  =0;
float media_altura =0;
int maior_doismet =0;

	
setlocale(LC_ALL, "Portuguese");

do{
	contador+=1;
	
printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 5 - ALTURA DE 20 PESSOAS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("                       Digite a altura da pessoa %i\n", contador);

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%f", &altura );

if (altura > altura_maior) {

altura_maior = altura ;

}

soma_altura+=altura;
media_altura= (soma_altura/contador);

if (altura>2) {

maior_doismet +=1;

}

}while (contador<=19);





system("cls");


printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 5 - ALTURA DE 20 PESSOAS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("                   A maior altura do grupo é:\n");
printf("\n");
printf("                             %.2f", altura_maior);

printf("\n");
printf("\n");

printf("                   A altura média do grupo é:\n");
printf("\n");
printf("                             %.2f\n", media_altura);

printf("\n");
printf("\n");

printf("       O número de pessoas com altura superior a 2 metros\n");
printf("\n");
printf("                            %i\n", maior_doismet);

printf("\n");
printf("\n");

return(0);
}



