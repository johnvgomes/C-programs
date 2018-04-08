#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	

char nome[100] ="";
float distancia = 0;
float tempo_levado = 0;
float velocidade = 0;
float velocidade_media = 0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 15 - Velocidade Media\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite o nome do piloto: \n");
printf("\n                             ");
scanf("%s" , &nome );
printf("\n\a");
printf("               Digite a distancia percorria em Km: \n");
printf("\n                             ");
scanf("%f" , &distancia);
printf("\n\a");
printf("               Digite o tempo levado p/ percorrer a distancia em horas: \n");
printf("\n                             ");
scanf("%f" , &tempo_levado );



velocidade_media = (distancia/tempo_levado);
    

printf("\n");
printf("\n\a");
printf("                    A velocidade media do %s foi %.2f Km/h a:\n\n", nome, velocidade_media);

return (0);
}



