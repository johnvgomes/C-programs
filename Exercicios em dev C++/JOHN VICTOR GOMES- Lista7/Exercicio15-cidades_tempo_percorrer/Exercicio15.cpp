#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main ()


{
	
int cidades[6][6];
int linha =0;
int coluna=0;
int cont=0;
int origem=0;
int destino=0;


setlocale(LC_ALL, "Portuguese");



//TRIANGULO SUPERIOR DIREITO

cidades[0][1] = 2;
cidades[0][2] = 11;
cidades[0][3] = 6;
cidades[0][4] = 15;
cidades[0][5] = 11;
cidades[0][6] = 1;
cidades[1][2] = 7;
cidades[1][3] = 12;
cidades[1][4] = 4;
cidades[1][5] = 2;
cidades[1][6] = 15;
cidades[2][3] = 11;
cidades[2][4] = 8;
cidades[2][5] = 3;
cidades[2][6] = 13;
cidades[3][4] = 10;
cidades[3][5] = 2;
cidades[3][6] = 1;
cidades[4][5] = 2;
cidades[4][6] = 13;
cidades[5][6] = 14;

//FIM TRIANGULO SUPERIOR DIREITO

//TRIANGULO INFERIOR ESQUERDO

cidades[1][0] = 2;
cidades[2][0] = 11;
cidades[3][0] = 6;
cidades[4][0] = 15;
cidades[5][0] = 11;
cidades[6][0] = 1;
cidades[2][1] = 7;
cidades[3][1] = 12;
cidades[4][1] = 4;
cidades[5][1] = 2;
cidades[6][1] = 15;
cidades[3][2] = 11;
cidades[4][2] = 8;
cidades[5][2] = 3;
cidades[6][2] = 13;
cidades[4][3] = 10;
cidades[5][3] = 2;
cidades[6][3] = 1;
cidades[5][4] = 2;
cidades[6][4] = 13;
cidades[6][5] = 14;

//FIM TRIANGULO INFERIOR ESQUERDO


for(cont=1;;cont++){

printf("    Escolha uma das opcoes referente as cidades:\n\n");
printf("\n");
printf("       0- (a)     1-(b)      2-(c)     3-(d)   4-(e)   5-(f)    6-(g)\n");
printf("\n");
printf("Digite a cidade origem:\n");
printf("\n          ");
scanf("%i",&origem);

printf("\n\n\n");

printf("Digite a cidade destino:\n\n");
printf("\n           ");
scanf("%i", &destino);



 if (origem ==destino) {
 break;

}


printf("--------------------------------------------------------\n");
printf("                 TEMPO PARA PERCORRER AS CIDADES\n");
printf("--------------------------------------------------------\n");

printf(" O tempo necessario para percorrer é de:\n");
printf("\n");
printf("\n                                          ");
if (origem == 0 && destino == 0) {

printf("0 horas\n");
printf("AFINAL VOCE ESTA SAINDO DO MESMO LUGAR QUE ESCOLHEU PARA O DESTINO\n");
printf("PORTANTO O PROGRAMA FOI ENCERRADO\n");
}else{
printf("%i horas", cidades[origem][destino]);
}
printf("\n");

printf("\n");
system("pause");

system("cls");
}




printf("--------------------------------------------------------\n");
printf("                 TEMPO PARA PERCORRER AS CIDADES\n");
printf("--------------------------------------------------------\n");

printf(" O tempo necessario para percorrer é de:\n");
printf("\n");
printf("\n                                          ");
if (origem == 0 && destino == 0) {

printf("0 horas\n");
printf("AFINAL VOCE ESTA SAINDO DO MESMO LUGAR QUE ESCOLHEU PARA O DESTINO\n");
printf("PORTANTO O PROGRAMA FOI ENCERRADO\n");
}else{
printf("%.0f horas", cidades[origem][destino]);
}
printf("\n");

printf("\n");

	return(0);
}



